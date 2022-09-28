algoritmo "2Problemas"
// Função :
// Autor :
// Data : 26/02/2019
// Seção de Declarações 
var
valor1, valor2, valor3, nvalor3 : inteiro
//nvalor3: Novo valor3 trasnformado sendo negativo

inicio
// Seção de Comandos
escreval(" Digite o 1º valor: ")
leia(valor1)
escreval(" Digite o 2º valor: ")
leia(valor2)
se (valor1>valor2) entao
   escreval(" A diferença dos valores é:", (valor1-valor2))
   //Mostro a diferença subitraindo um pelo outro
senao
     escreval(" A diferença dos valores é:", (valor2-valor1))
     //O mesmo da variavel a cima
fimse
escreval("")
escreval(" Digite o 3º valor: ")
leia(valor3)
se (valor3<0) entao
   nvalor3 <- valor3*-1
   escreval(" Valor 3: ", nvalor3)
   //Se o valor for negativo, faço ele x-1, para alterar o sinal
senao
se (valor3>=0) entao
   escreval(" Valor 3: ", valor3)
   //Se for positivo apenas escrevo ele
fimse
fimse

fimalgoritmo

