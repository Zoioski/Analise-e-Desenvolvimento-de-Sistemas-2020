algoritmo "semnome"
// Função :
// Autor :
// Data : 27/02/2019
// Seção de Declarações
var
a, repeticao, par, impar, negativo, positivo: inteiro
inicio
// Seção de Comandos
para repeticao de 1 ate 5 faca
   escreva(" Digite o valor de A: ")
   leia(a)
   se (a<0) entao
      negativo <- negativo+1
   senao
      positivo <- positivo+1
   fimse
   se (a mod 2 =0) entao
      par <- par +1
   senao
      impar <- impar +1
   fimse
fimpara
escreval("Positivos: ", positivo, "/ Negativos: ", negativo, "/ Pares: ", par, "/ Impares: ", impar )
fimalgoritmo
