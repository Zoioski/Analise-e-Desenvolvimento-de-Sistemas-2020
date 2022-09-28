Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 14/02/2019
Var
a, b, c : inteiro

Inicio
escreva(" Valor de A ")
leia(a)
escreva(" Valor de B ")
leia(b)
escreva(" Valor de C ")
leia(c)
escreval("     OU    [   ]     E     ")
escreval(" F - F = F [   ] F - F = F ")
escreval(" F - V = V [   ] F - V = F ")
escreval(" V - V = V [   ] V - V = V ")
//Se a<=b ou a<=c entao
se(a<=b)= falso entao
   escreval(" (a1 é F) ")
senao
   se(a<=b)= verdadeiro entao
      escreval(" (a1 é V) ")
   fimse
fimse
se(a<=c)= falso entao
   escreval(" (a2 é F) ")
senao
   se(a<=c)= verdadeiro entao
      escreval(" (a2 é V) ")
   fimse
fimse
//Se a>b e b>c entao
se(a>b)= falso entao
   escreval(" (b1 é F)")
senao
   se(a>b)= verdadeiro entao
      escreval(" (b1 é V) ")
   fimse
fimse
se(b>c)= falso entao
   escreval(" (b2 é F) ")
senao
   se(b>c)= verdadeiro entao
      escreval(" (b2 é V) ")
   fimse
fimse
//Se b<=a ou b>=c entao
se(b<=a)= falso entao
   escreval(" (c1 é F) ")
senao
   se(b<=a)= verdadeiro entao
      escreval(" (c1 é V) ")
   fimse
fimse
se(b>=c)= falso entao
   escreval(" (c2 é F) ")
senao
   se(b>=c)= verdadeiro entao
      escreval(" (c2 é V) ")
   fimse
fimse
Fimalgoritmo
