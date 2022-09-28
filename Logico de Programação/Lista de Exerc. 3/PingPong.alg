algoritmo "PingPong"
// Função :
// Autor :
// Data : 06/03/2019
// Seção de Declarações
var
ponto : caracter
J1, J2, placar : inteiro

inicio
// Seção de Comandos
enquanto ((J1 < 10) e (J2 < 10)) ou ((J1-J2<2) e (J2-J1<2)) faca
   escreval(" Quem marcou o ponto: J1/J2 ")
   leia(ponto)
   se ponto = "1" entao
      J1 <- J1 +1
   senao
      se ponto = "2" entao
         J2 <- J2 +1
      fimse
   fimse
fimenquanto
se (J1 > J2) entao
   escreval("J1 WINS")
senao
   escreval("J2 WINS")
fimse



fimalgoritmo
