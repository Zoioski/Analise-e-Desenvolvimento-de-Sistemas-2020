algoritmo "semnome"
// Função :
// Autor :
// Data : 06/03/2019
// Seção de Declarações
var
sexo, res : caracter
F, M, S, N : real
ent, p, FS, MN : inteiro

inicio
// Seção de Comandos
Escreval(" Quantas pessoas serao intrevistadas: ")
leia(p)
para ent de 1 ate p faca
   escreval(" Você gostou do produto novo ? S/N ")
   leia(res)
   escreval(" Digite seu gênero : F/M ")
   leia(sexo)
   se res = "s" entao
      s <- s+1
   senao
      n <- n+1
   fimse
   se sexo = "f" entao
      f <- f+1
   senao
      m <- m+1
   fimse
   se (res="s") e (sexo="f") entao
      fs <- fs+1
   fimse
   se (res="n") e (sexo="m") entao
      mn <- mn +1
   fimse
fimpara
escreval(" Quantidade de pessoas que responderam SIM :", s )
escreval(" Quantidade de pessoas que responderam NÃO :", n )
escreval(" Porcentagem de pessoas do sexo Feminino :", (f/p)*100)
escreval(" Porcentagem de pessoas do sexo Masculino :", (m/p)*100)
escreval(" Porcentagem de pessoas do sexo Feminimo que responderam SIM :", (fs/f)*100)
escreval(" Porcentagem de pessoas do sexo Masculino que responderam NÃO :", (mn/m)*100)
fimalgoritmo

