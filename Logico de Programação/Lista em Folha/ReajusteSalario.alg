algoritmo "semnome"
// Função :
// Autor :
// Data : 19/02/2019
// Seção de Declarações 
var
nome : caracter
salario : real
reajuste : real

inicio
// Seção de Comandos
escreva (" Digite o nome do jogador : ")
leia (nome)
EScreva (" Digite o salário do jogador : ")
leia (salario)
     se (salario>=0) e (salario<=1000) ENTAO
     reajuste <- salario * 1.2
     escreva ( " Jogador ", nome, " Salario atual : ", salario, ", Reajuste do Salario : ", reajuste)
     senao
     se (salario>=1000) e (salario<=5000) ENTAO
     reajuste <- salario * (10/100) + salario
     escreva ( " Jogador ", nome, " Salario atual : ", salario, ", Reajuste do Salario : ", reajuste)
     senao
     se (salario>=5000) ENTAO
     reajuste <- salario
     escreva ( " Jogador ", nome, " Salario atual : ", salario, ", Reajuste do Salario : ", reajuste)
     fimse
     fimse
     fimse
fimalgoritmo
