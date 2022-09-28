algoritmo "NomeSexo"
// Função :
// Autor :
// Data : 26/02/2019
// Seção de Declarações 
var
nome, sexo, M, F : caracter

inicio
// Seção de Comandos 
escreva(" Digite seu nome: ")
leia(nome)
escreva(" Digite seu sexo M/F: ")
leia(sexo)
se (sexo<>M) entao
   escreva("Sra. ", nome, ", Sexo: Feminino. ")
senao
se (sexo<>F) entao
   escreva("Sr. ", nome, ", Sexo: Masculino. ")
fimse
fimse


fimalgoritmo
