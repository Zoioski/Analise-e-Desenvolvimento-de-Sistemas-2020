#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

char login_adm[10]="adm123";	//Login e Senha de Administrador
char senha_adm[10]="adm123";
char login_func[10]="func123";	//Login e Senha de Funcionario
char senha_func[10]="func123";

int numero_pedido=0;
int con=1;
int n_item_p=0;
int z=0;
int n_item=0;
char n_garcom[30];
int n_mesa=0; 
int n_pedido=0;
int n_resp_m=0;

typedef struct{		//Struct de cadastro dos itens do cardapio
	int opcao;
	int n_cad;
	char nome[50];
	int preco;
	char ingre[200];
} opcao;

typedef struct{		//Struct dos itens dentro do pedido (antes de fechar o pedido)
	int opcao;
	int numero;
	char nome[50];
	int quanti;
	int preco;
	int item;
} pedido;

typedef struct{		//Struct dos pedidos fechados
	int opcao;
	int numero;
	char nome[50];
	int quanti;
	int preco;
	int n_mesa;
	char n_garcom[30];
	int conz;
	int conn;
	int item;
}pedido_end;

pedido lista_p[40];		//Vetor 40 itens no pedido
opcao lista_c[100];		//Vetor 100 itens do cardapio
pedido_end lista_end[100];		//Vetor de 100 pedidos fechados

// Cria arquivo txt do Cardapio
void arq_cardapio(){
  FILE *arq_cardapio;
  arq_cardapio = fopen("arq_cardapio.txt", "a");
  fclose(arq_cardapio);
}

// Cria arquivo txt dos itens na lista de pedidos
void arq_lista_p(){
  FILE *arq_lista_p;
  arq_lista_p = fopen("arq_lista_p.txt", "a");
  fclose(arq_lista_p);
}

// Cria arquivo txt dos pedido salvos
void arq_lista_end(){
  FILE *arq_lista_end;
  arq_lista_end = fopen("arq_lista_end.txt", "a");
  fclose(arq_lista_end);	
}

// (AMBOS) Sistema de Login
int login(){
	char user[10],senha[10];
	login:
	system("cls");      
	printf("[-------------------------------------------------------------]\n");
	printf("[-------------------------Bem Vindo---------------------------]\n");
	fflush(stdin);
	printf("[---------------------Digite o usuario:-----------------------]\n");
	gets(user);
	printf("[----------------------Digite a senha:------------------------]\n");
	gets(senha);
	
	
	if(strcmp(user,login_adm)==0){
		if(strcmp(senha,senha_adm)==0){
		return(1);
	}
		else{
		system("cls");
		printf("[-------------------------------------------------------------]\n");
		printf("[----------------------Login Invalido-------------------------]\n");
		printf("[-------------------------------------------------------------]\n");
		system("pause");
		goto login;
	}
}
	else if(strcmp(user,login_func)==0){
		if(strcmp(senha,senha_func)==0){
		return(2);
	}
		else{
		system("cls");
		printf("[-------------------------------------------------------------]\n");
		printf("[----------------------Login Invalido-------------------------]\n");
		printf("[-------------------------------------------------------------]\n");
		system("pause");
		goto login;
	}
}
	else{
		system("cls");
		printf("[-------------------------------------------------------------]\n");
		printf("[----------------------Login Invalido-------------------------]\n");
		printf("[-------------------------------------------------------------]\n");
		system("pause");
		goto login;
	}
}

// (AMBOS) Mostra Cardápio na tela
void cardapio(){
	
	system("cls");
	printf("[-------------------------Comida------------------------------]\n");
	for(int x=0;x<con;x++){
		if(lista_c[x].opcao==1){
			
			printf("[--N: %d --Nome: %s --Preco: %d --]\n", lista_c[x].n_cad, lista_c[x].nome, lista_c[x].preco);
			printf("[--Descricao: %s --]\n", lista_c[x].ingre);
			printf("[-------------------------------------------------------------]\n\n");
		}
	}
	printf("[-------------------------Bebida------------------------------]\n");
	for(int x=0;x<con;x++){
		if(lista_c[x].opcao==2){
		
			printf("[--N: %d --Nome: %s --Preco: %d --]\n", lista_c[x].n_cad, lista_c[x].nome, lista_c[x].preco);
			printf("[--Descricao: %s ]\n\n", lista_c[x].ingre);
			printf("[-------------------------------------------------------------]\n\n");
		}
	}
}

// (FUNC) Passar iten selecionado para a lista do pedido
void opcao_pedido(){
	inicio_op_pedido:
	int n_opcao=0;
	int t_opcao=0;
	int quanti=0;
	printf("[-Comida:1-]\n[-Bebida:2-]\n");
	scanf("%d", &t_opcao);
	
	printf("[-N do Item:-]\n");
	scanf("%d", &n_opcao);
	
	if(t_opcao==1){
		for(int x=0;x<40;x++){
			if(n_opcao==lista_c[x].n_cad){
				printf("[-Digite a quantidade:-]\n");
				scanf("%d", &quanti);
				lista_p[n_item_p].opcao=t_opcao;
				strcpy(lista_p[n_item_p].nome,lista_c[x].nome);
				lista_p[n_item_p].preco=lista_c[x].preco;
				lista_p[n_item_p].quanti=quanti;
				lista_p[n_item_p].item=n_item+1;
			}
		}
	}
	else if(t_opcao==2){
		for(int x=0;x<40;x++){
			if(n_opcao==lista_c[x].n_cad){
				printf("[-Digite a quantidade:-]\n");
				scanf("%d", &quanti);
				lista_p[n_item_p].opcao=t_opcao;
				strcpy(lista_p[n_item_p].nome,lista_c[x].nome);
				lista_p[n_item_p].preco=lista_c[x].preco;
				lista_p[n_item_p].quanti=quanti;
				lista_p[n_item_p].item=n_item+1;
			}
		}
	}
	
	FILE *arq_lista_p;
	arq_lista_p = fopen("arq_lista_p.txt", "w");
	fprintf(arq_lista_p,"--N: %d\n--Nome: %s\n--R$%d\n--Quanti.: %d\n", lista_p[n_item_p].opcao, lista_p[n_item_p].nome, lista_p[n_item_p].preco, lista_p[n_item_p].quanti);
	fclose(arq_lista_p);
	n_item_p++;
	n_item++;
}

// (ADM / FUNC) Cadastra um novo item no cardapio
void cadastrar_item(){
	lista_c[con].n_cad=con;
	printf("[--Numero de Cadastro: %d--]\n\n", lista_c[con].n_cad);
	
	printf("[--Digite a opcao de item %d:--]\n", lista_c[con].n_cad);
	printf("[-Comida:1-]\n[-Bebida:2-]\n");
	scanf("%d", &lista_c[con].opcao);
	fflush(stdin);
	printf("[--Digite o Nome %d:--]\n", lista_c[con].n_cad);
	scanf("%s", &lista_c[con].nome);
	
	printf("[--Digite a descricao %d:--]\n", lista_c[con].n_cad);
	scanf("%s", &lista_c[con].ingre);
	
	printf("[--Digite o preco %d:--]\n", lista_c[con].n_cad);
	scanf("%d", &lista_c[con].preco);
							
	system("cls");
	
	FILE *arq_cardapio;
 	 arq_cardapio = fopen("arq_cardapio.txt", "w");
 	 fprintf(arq_cardapio,"--N: %d\n--Nome:%s\n--Preco:%d\n--Opcao:%d\n--Ingred.:%s\n\\\\\\\\\\\n", lista_c[con].n_cad, lista_c[con].nome, lista_c[con].preco, lista_c[con].opcao, lista_c[con].ingre);
 	 fclose(arq_cardapio);
 	 con++;
}

// (FUNC) Apaga 1 item do pedido
void apagar_item(){
	int item_c=0;
	printf("[-- Digite o Numero do item : --]");
	scanf("%d", &item_c);
	
	for(int x=0;x<40;x++){
		if(item_c==lista_p[x].item){
			strcpy(lista_p[x].nome,"");
			lista_p[x].opcao=0;
			lista_p[x].preco=0;
			lista_p[x].quanti=0;
			lista_p[x].item=0;
		}
		lista_p[x].item--;
	}
	n_item--;
}

// (FUNC) Salva o pedido
void salvar_pedido(){
	system("cls");
	printf("[-------------------------------------------------------------]\n");
	printf("[-----------------------Pedido Gravado------------------------]\n");
	printf("[-------------------------------------------------------------]\n");
	lista_end[n_mesa].conz=z;
	lista_end[n_mesa].conn=n_item_p;
	strcpy(lista_end[z].n_garcom,n_garcom);
	lista_end[z].n_mesa=n_mesa;
	lista_end[z].numero=n_pedido;
	
	for(z;z<n_item_p;z++){
		strcpy(lista_end[z].nome,lista_p[z].nome);
		lista_end[z].opcao=lista_p[z].opcao;
		lista_end[z].preco=lista_p[z].preco;
		lista_end[z].quanti=lista_p[z].quanti;
		lista_end[z].item=lista_p[z].item;
	}
		
	FILE *arq_lista_end;
	arq_lista_end = fopen("arq_lista_end.txt", "w");
	fprintf(arq_lista_end,"--N: %d\n--Nome: %s\n--R$%d\n--Quanti.: %d\n--Garcom: %s\n--Mesa: %d\n--Pedido: %d\n", lista_end[z].opcao, lista_end[z].nome, lista_end[z].preco, lista_end[z].quanti, lista_end[z].n_garcom, lista_end[z].n_mesa ,lista_end[z].numero);
	fclose(arq_lista_end);
				
	for(int x=0;x<40;x++){
		strcpy(lista_p[x].nome,"");
		lista_p[x].opcao=0;
		lista_p[x].preco=0;
		lista_p[x].quanti=0;
		n_mesa=0;
		strcpy(n_garcom,"");
		lista_p[x].item=0;						
	 }
 n_item=0;
 
}

// (FUNC) Cancela o pedido antes de salvar
void cancelar_pedido(){
	system("cls");
	printf("[-------------------------------------------------------------]\n");
	printf("[----------------------Cancelar Pedido------------------------]\n");
	printf("[-------------------------------------------------------------]\n");
	n_pedido--;
	for(int x=0;x<40;x++){
		strcpy(lista_p[x].nome,"");
		lista_p[x].opcao=0;
		lista_p[x].preco=0;
		lista_p[x].quanti=0;
		n_mesa=0;
		strcpy(n_garcom,"");
		lista_p[x].item=0;						
	 }
	n_item=0;
}

// (AMBOS) Mostra um pedido selecionado
int mostrar_pedido(){ 
	printf("[--Numero da Mesa--]\n");
	scanf("%d", &n_resp_m);
	for(int x=0;x<40;x++){
		if(n_resp_m==lista_end[x].n_mesa){
			system("cls");
			int aux;
			aux=lista_end[n_resp_m].conz;
			printf("[--Garcom: %s-----------N Pedido: %d-----------Mesa: %d--]\n\n", lista_end[x].n_garcom, lista_end[x].numero, lista_end[x].n_mesa);
			printf("[-------------------------Comida------------------------------]\n");
			int c=0;
			for(lista_end[n_resp_m].conz;lista_end[n_resp_m].conz<lista_end[n_resp_m].conn;lista_end[n_resp_m].conz++){
				if(lista_end[c].opcao==1){
					printf("[- N:%d -- Item:%s -- R$%d -- Quant.:%d -]\n", lista_end[c].item, lista_end[c].nome, lista_end[c].preco, lista_end[c].quanti);
				}
				c++;
			}
			printf("[-------------------------------------------------------------]\n\n");
			lista_end[n_resp_m].conz=aux;
			printf("[-------------------------Bebida------------------------------]\n");
			int b=0;
			for(lista_end[n_resp_m].conz;lista_end[n_resp_m].conz<lista_end[n_resp_m].conn;lista_end[n_resp_m].conz++){
				if(lista_end[b].opcao==2){
					printf("[- N:%d -- Item:%s -- R$%d -- Quant.:%d -]\n", lista_end[b].item, lista_end[b].nome, lista_end[b].preco, lista_end[b].quanti);
				}
				b++;
			}
			printf("[-------------------------------------------------------------]\n\n");
			lista_end[n_resp_m].conz=aux;
		}
	}
	int opcao=0;
	printf("[----------------------------------]\n");
	printf("[--1 - Adicionar Item --]\n");
	printf("[--2 - Excluir Item --]\n");
	printf("[--3 - Apagar Pedido --]\n\n");
	printf("[--4 - Voltar ao Menu de Pedidos --]\n");
	printf("[----------------------------------]\n");
	scanf("%d", &opcao);
	return opcao;
}


main(){
	arq_cardapio();
	arq_lista_p();
	arq_lista_end();
	menu_login:
	int confirm_login,opcao_adm,opcao_func;
	confirm_login = login();
	
	if(confirm_login == 1){
		inicio_adm:
		system("cls");
		printf("[-------------------------------------------------------------]\n");
		printf("[-----------------Login de Administrador Ativo----------------]\n");
		printf("[-------------------------------------------------------------]\n");
		system("pause");
		system("cls");
		menu_adm:
		system("cls");
		printf("[-------------------------------------------------------------]\n");
		printf("[--1 - CADASTRAR ITEM--]\n[--2 - Cardapio--]\n[--3 - Deslogar--]\n");
		printf("[-------------------------------------------------------------]\n");
		opcao_adm = getch(); //MENU de Administrador
		switch(opcao_adm){
			case '1' :
				system("cls");
				cadastrar_item();
				system("pause");
				goto menu_adm;
				
			case '2' :
				goto menu_login;
				cardapio();
				system("pause");
				goto menu_adm;
				
			case '3' :
				system("cls");
				printf("[-------------------------------------------------------------]\n");
				printf("[----------------Voltando ao Menu de Login--------------------]\n");
				printf("[-------------------------------------------------------------]\n");
				system("pause");
				goto menu_login;
				
			default :
				system("cls");
				printf("[-------------------------------------------------------------]\n");
				printf("[----------------------Opçao Invalida-------------------------]\n");
				printf("[-------------------------------------------------------------]\n");
				system("pause");
				goto menu_adm;
			}
		}
	else if(confirm_login == 2){
		inicio_func:
		system("cls");
		printf("[-------------------------------------------------------------]\n");
		printf("[---------------Login de Funcionario Ativo--------------------]\n");
		printf("[-------------------------------------------------------------]\n");
		system("pause");
		system("cls");
		menu_func:
		system("cls");
		printf("[-------------------------------------------------------------]\n");
		printf("\t[--1 - Abrir pedido--]\n\t[--2 - Lista de pedido--]\n\t[--3 - Cardapio--]\n\t[--4 - Deslogar--]\n\t[--5 - CADASTRAR ITEM--]\n");
		printf("[-------------------------------------------------------------]\n");
		opcao_func = getch();
		switch(opcao_func){ //MENU de Funcionario
			case '1' :
				int resp;
				system("cls");
				fflush(stdin);
				printf("[-------------------------------------------------------------]\n");
				printf("[----------------------Nome do garcom:------------------------]\n");
				scanf("%s", &n_garcom);
				printf("[----------------------Numero da mesa:------------------------]\n");
				scanf("%d", &n_mesa);
				n_pedido++;
				inicio_pedido:
				system("cls");
				printf("[--Garcom: %s-----------N Pedido: %d-----------Mesa: %d--]\n\n", n_garcom, n_pedido, n_mesa);
				printf("[-------------------------Comida------------------------------]\n\n");
				for(int x=0;x<40;x++){
					if(lista_p[x].opcao==1){
						printf("[- N:%d -- Item:%s -- R$%d -- Quant.:%d -]\n\n", lista_p[x].item, lista_p[x].nome, lista_p[x].preco, lista_p[x].quanti);
					}
				}
				printf("[-------------------------Bebida------------------------------]\n\n");
				for(int x=0;x<40;x++){
					if(lista_p[x].opcao==2){
						printf("[- N:%d -- Item:%s -- R$%d -- Quant.:%d -]\n\n", lista_p[x].item, lista_p[x].nome, lista_p[x].preco, lista_p[x].quanti);
					}
				}
				printf("[--------------------------]\n");
				printf("[--1 - Escolher uma opcao--]\n");
				printf("[--2 - Abrir Cardapio--]\n");
				printf("[--3 - Apagar Item--]\n\n");
				printf("[--4 - Cancelar Pedido--]\n");
				printf("[--5 - Fechar Pedido--]\n");
				printf("[--------------------------]\n");
				resp = getch();
				switch(resp){
					case '1' : // Adiciona um item no pedido aberto
						opcao_pedido();
						system("pause");
						goto inicio_pedido;
						
					case '2' : // Mostra o cardapio na tela
						cardapio();
						system("pause");
						goto inicio_pedido;
				
					case '3' : // Apaga um item do pedido aberto
						apagar_item();
						system("pause");
						goto inicio_pedido;
					
					case '4' : // Cancela o pedido
						cancelar_pedido();
						system("pause");
						goto menu_func;
				
					case '5' : // Salva o pedido
						salvar_pedido();
						system("pause");
						goto menu_func;
				
					default :
						system("cls");
						printf("[-------------------------------------------------------------]\n");
						printf("[----------------------Opçao Invalida-------------------------]\n");
						printf("[-------------------------------------------------------------]\n");
						system("pause");
						goto inicio_pedido;
				}
				
			case '2' :
				menu_pedidos_ativos: // Mostra Lista de pedidos salvos
				system("cls");
				int resp_p;
				printf("[-------------------------------------------------------------]\n");
				printf("[--------------------Lista Pedidos Ativos---------------------]\n");
				printf("[-------------------------------------------------------------]\n");
				for(int x=0;x<50;x++){
					if(lista_end[x].n_mesa != 0){
						printf("[--Mesa:%d --Pedido:%d --]\n", lista_end[x].n_mesa, lista_end[x].numero);
					}
				}
				printf("\n");
				printf("[-------------------------------]\n");
				printf("[--1 - Visualizar Pedido--]\n");
				printf("[--2 - Excluir pedido--]\n");
				printf("[--3 - Finalizar Pedido--]\n\n");
				printf("[--4 - Voltar ao Menu Anterior--]\n");
				printf("[-------------------------------]\n\n");
				resp_p = getch();
				switch(resp_p){
				case '1' : // Mostra um pedido selecionado
					mostrar_pedido();
					fflush (stdin);
					system("cls");
					if(mostrar_pedido()==1){
						
					}
					else if(mostrar_pedido()==2){
						int aux=0;
						aux=lista_end[n_resp_m].conz;
						int c=0;
						printf("[-------------------------------------------------------]\n");
						for(lista_end[n_resp_m].conz;lista_end[n_resp_m].conz<lista_end[n_resp_m].conn;lista_end[n_resp_m].conz++){
							if(lista_end[c].opcao==1){
								printf("[- N:%d -- Item:%s -- R$%d -- Quant.:%d -]\n", lista_end[c].item, lista_end[c].nome, lista_end[c].preco, lista_end[c].quanti);
							}
							c++;
						}
						lista_end[n_resp_m].conz=aux;
						int b=0;
						for(lista_end[n_resp_m].conz;lista_end[n_resp_m].conz<lista_end[n_resp_m].conn;lista_end[n_resp_m].conz++){
							if(lista_end[b].opcao==2){
								printf("[- N:%d -- Item:%s -- R$%d -- Quant.:%d -]\n", lista_end[b].item, lista_end[b].nome, lista_end[b].preco, lista_end[b].quanti);
							}
							b++;
						}
						printf("[-------------------------------------------------------]\n");
						lista_end[n_resp_m].conz=aux;
						
						int item_p=0;
						printf("[-- Digite o Numero do item : --]");
						scanf("%d", &item_p);		
						for(lista_end[n_resp_m].conz;lista_end[n_resp_m].conz<lista_end[n_resp_m].conn;lista_end[n_resp_m].conz++){
							if(item_p==lista_end[n_resp_m].item){
								strcpy(lista_end[n_resp_m].nome,"");
								lista_end[n_resp_m].opcao=0;
								lista_end[n_resp_m].preco=0;
								lista_end[n_resp_m].quanti=0;
								lista_end[n_resp_m].item=0;
							}
						}
						lista_end[n_resp_m].conz=aux;
					}
							
							system("pause");
							goto menu_pedidos_ativos;
						
					case '2' : // Editar algum pedido
						system("cls");
						printf("[-------------------------------]\n");
						system("pause");
						goto menu_pedidos_ativos;
						
					case '3' :
						system("cls");
						printf("[-------------------------------]\n");
						system("pause");
						goto menu_pedidos_ativos;
						
					case '4' : // Volta ao menu de funcionario
						system("cls");
						printf("[-------------------------------------------------------------]\n");
						printf("[---------------Voltando ao menu de funcionario---------------]\n");
						printf("[-------------------------------------------------------------]\n");
						system("pause");
						goto menu_func;
						
					default :
						system("cls");
						printf("[-------------------------------------------------------------]\n");
						printf("[----------------------Opçao Invalida-------------------------]\n");
						printf("[-------------------------------------------------------------]\n");
						system("pause");
						goto menu_pedidos_ativos;
				}
				
			case '3' :
				system("cls");
				cardapio();
				system("pause");
				goto menu_func;
			
			case '4' :
				system("cls");
				printf("[-------------------------------------------------------------]\n");
				printf("[-------------------Voltando a Tela de Login------------------]\n");
				printf("[-------------------------------------------------------------]\n");
				system("pause");
				goto menu_login;
			
				
			case '5' :
				system("cls");
				cadastrar_item();
				system("pause");
				goto menu_func;
							
			default :
				system("cls");
				printf("[-------------------------------------------------------------]\n");
				printf("[----------------------Opçao Invalida-------------------------]\n");
				printf("[-------------------------------------------------------------]\n");
				system("pause");
				goto menu_func;
				
 		}
	}
}
