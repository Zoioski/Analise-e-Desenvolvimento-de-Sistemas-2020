algoritmo "AlgDeXeY-A"
// Função :
// Autor :
// Data : 27/02/2019
// Seção de Declarações 
var
x, y, a, nx, ny : inteiro

inicio
// Seção de Comandos
escreval(" Digite o valor de X: ")
leia(x)
escreval(" Digite o valor de Y: ")
leia(y)
escreval(" Digite o valor de A: ")
leia(a)
se (a>15) entao
   nx <- x*3
   ny <- y+2
   escreval(" X: ", nx)
   escreval(" Y: ", ny)
senao
se (a<=15) e (a>10) entao
   nx <- x*4
   ny <- y+1
   escreval(" X: ", nx)
   escreval(" Y: ", ny)
senao
se (a<=10) e (a>5) entao
   nx <- x*3
   ny <- y+3
   escreval(" X: ", nx)
   escreval(" Y: ", ny)
senao
se (a<=5) entao
   nx <- 0
   ny <- 0
   escreval(" X: ", nx)
   escreval(" Y: ", ny)
fimse
fimse
fimse
fimse

fimalgoritmo
