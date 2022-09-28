algoritmo "semnome"
// Função :
// Autor :
// Data : 20/02/2019
// Seção de Declarações 
var
nome, cpf : caracter
ndep, salmin : inteiro
soma, renda, dd, dsalmin, nrenda : real
//ndep: Numero de Dependentes
//salmin: Salario Minimo
//renda: Renda Mensal
//dd: Desconto por dependente
//dsalmin: Desconto no Salario Minimo

inicio
// Seção de Comandos 
escreval(" Escreva seu nome  : ")
leia(nome)
//Nome do contribuinte
escreval(" Escreva o nº do CPF : ")
leia(cpf)
//CPF do contribuinte
escreval(" Escreva o nº de dependentes : ")
leia(ndep)
//Nº de dependentes
escreval(" Qual valor do salário mínimo : ")
leia(salmin)
//Salario Minimo atual
escreval(" Qual a renda mensal : ")
leia(renda)
//Renda mensal do contribuinte

dd<- (ndep*5)/100
//Desconto por dependente no salario minimo
dsalmin<- salmin*dd
//Valor do desconto na renda
nrenda<- renda-dsalmin
//Nova renda

se (nrenda<salmin) entao
    escreva(" Isento de Desconto. ")
    //Menos ou igual a 1 salário minimo
senao
se (nrenda>=salmin) e (nrenda<=salmin*2) entao
   escreva(" Isento de Desconto. ")
   //Até 2 salarios minimos
senao
se (nrenda>salmin*2) e (nrenda<=salmin*3) entao
   soma <- nrenda * 0.05
   escreva(" Imposto de Renda de 5%, valor a pagar: ", soma)
   //De 2 até 3 salarios minimos
senao
se (nrenda>salmin*3) e (nrenda<=salmin*5) entao
   soma <- nrenda * 0.1
   escreva(" Imposto de Renda de 10%, valor a pagar: ", soma)
   //De 3 até 5 salarios minimos
senao
se (nrenda>salmin*5) e (nrenda<=salmin*7) entao
   soma <- nrenda * 0.15
   escreva(" Imposto de Renda de 15%, valor a pagar: ", soma)
   //De 5 até 7 salarios minimos
senao
se (nrenda>salmin*7) entao
   soma <- nrenda * 0.2
   escreva(" Imposto de Renda de 20%, valor a pagar: ", soma)
   //Acima de 7 salarios minimos
fimse
fimse
fimse
fimse
fimse
fimse

fimalgoritmo

