algoritmo "semnome"
// Função :
// Autor :
// Data : 20/02/2019
// Seção de Declarações
var

valor1, valor2, valor3, ladoa, ladob, ladoc, novo : inteiro

inicio
// Seção de Comandos
escreva(" Digite o valor 1 : ")
leia(valor1)
escreva(" Digite o valor 2 : ")
leia(valor2)
escreva(" Digite o valor 3 : ")
leia(valor3)
se (valor1>=valor2) e (valor1>=valor3) entao
   ladoa <- valor1
   ladob <- valor2
   ladoc <- valor3
senao
   se (valor2>=valor3)entao
      ladoa <- valor2
      ladob <- valor3
      ladoc <- valor1
   senao
      se (valor2<=valor3) entao
         ladoa <- valor3
         ladob <- valor2
         ladoc <- valor1
      fimse
   fimse
fimse
se (ladob<ladoc) entao
   novo <- ladob
   ladob <- ladoc
   ladoc <- novo
fimse

se (ladoa>ladob+ladoc) entao
   escreva(" Não formam triângulo algum. ")
senao
   se (ladoa^2=(ladob^2+ladoc^2)) entao
      escreva( " Formam um triângulo retângulo. ")
   senao
      se (ladoa^2>(ladob^2+ladoc^2)) entao
         escreva(" Formam um triângulo obstusângulo. ")
      senao
         se (ladoa^2<(ladob^2+ladoc^2)) entao
            escreva(" Formam um triângulo acutângulo. ")
         senao
            se (ladoa=ladob=ladoc) entao
               escreva(" Formam um triângulo equilátero. " )
            senao
               se (ladoa=ladob) ou (ladob=ladoc) ou (ladoa=ladoc) entao
                  escreva(" Formam um triângulo isósceles. ")
               fimse
            fimse
         fimse
      fimse
   fimse
fimse
fimalgoritmo


