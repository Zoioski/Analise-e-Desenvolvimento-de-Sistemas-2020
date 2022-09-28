algoritmo "SoftLine SA"
// Função :
// Autor :
// Data : 26/02/2019
// Seção de Declarações 
var
nome, numcad : caracter
salat, salcor, aumento : real
//salat: Salario Atual
//salcor: Salario Corrigido
//numcad: Numero de Cadastro do funcionario

inicio
// Seção de Comandos 
escreval(" Digite o nome do funcionário:")
leia(nome)
escreval(" Digite o numero de cadastro:")
leia(numcad)
escreval(" Digite o salário atual do funcionário:")
leia(salat)
se (salat<=300) entao
   salcor <- salat*1.1
   escreval("Funcionario: ", nome)
   escreval("Cadastro: ", numcad)
   escreval("Salário Atual: ", salat)
   escreval("Percentual de Aumento: 10%")
   escreval("Salário Corrigido: ", salcor)
senao
se (salat>300) e(salat<=600) entao
   salcor <- salat*1.11
   escreval("Funcionario: ", nome)
   escreval("Cadastro: ", numcad)
   escreval("Salário Atual: ", salat)
   escreval("Percentual de Aumento: 11%")
   escreval("Salário Corrigido: ", salcor)
senao
se (salat>600) e(salat<=900) entao
   salcor <- salat*1.12
   escreval("Funcionario: ", nome)
   escreval("Cadastro: ", numcad)
   escreval("Salário Atual: ", salat)
   escreval("Percentual de Aumento: 12%")
   escreval("Salário Corrigido: ", salcor)
senao
se (salat>900) e(salat<=1500) entao
   salcor <- salat*1.06
   escreval("Funcionario: ", nome)
   escreval("Cadastro: ", numcad)
   escreval("Salário Atual: ", salat)
   escreval("Percentual de Aumento: 6%")
   escreval("Salário Corrigido: ", salcor)
senao
se (salat>1500) e(salat<=2000) entao
   salcor <- salat*1.03
   escreval("Funcionario: ", nome)
   escreval("Cadastro: ", numcad)
   escreval("Salário Atual: ", salat)
   escreval("Percentual de Aumento: 3%")
   escreval("Salário Corrigido: ", salcor)
senao
se (salat>2000) entao
   salcor <- salat
   escreval("Funcionario: ", nome)
   escreval("Cadastro: ", numcad)
   escreval("Salário Atual: ", salat)
   escreval("Percentual de Aumento: Sem Aumento")
   escreval("Salário Corrigido: ", salcor)
fimse
fimse
fimse
fimse
fimse
fimse


fimalgoritmo
