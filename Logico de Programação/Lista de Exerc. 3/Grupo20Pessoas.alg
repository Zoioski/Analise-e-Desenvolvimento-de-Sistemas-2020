algoritmo "Grupo20Pessoas"
// Função :
// Autor :
// Data : 06/03/2019
// Seção de Declarações
var
altura : Real
altmedia : Real
superior : Real
maior : Real
contador : Inteiro
n : inteiro
inicio
// Seção de Comandos
escreval(" Quantas pessoas são: ")
leia(n)
PARA contador de 1 ate n faca
   ESCREVAL("")
   ESCREVA("Digite sua altura: ")
   Leia(altura)
   altmedia <- altmedia + altura
   SE (maior<altura) ENTAO
      maior <- altura
   fimse
   SE (altura > 2) ENTAO
      superior <- superior+1
   fimse
FIMPARA
ESCREVAL("")
ESCREVAL("")
ESCREVAL("Pessoas acima de 2 metros: ",superior," pessoas")
ESCREVAL("Altura média: ",altmedia / n)
ESCREVAL("Maior altura: ",maior )
fimalgoritmo
