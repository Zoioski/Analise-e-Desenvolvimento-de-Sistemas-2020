algoritmo "NotaFinalAluno"
// Função :
// Autor :
// Data : 26/02/2019
// Seção de Declarações 
var
nota1, nota2, nota3, mediaex : inteiro
mediaap : real
// mediaex: Média dos exercícios
// mediaap: Média de Aproveitamento
aluno, turma : caracter

inicio
// Seção de Comandos
escreva(" Digite o nome do aluno: ")
leia(aluno)
escreva(" Digite a turma do aluno: ")
leia(turma)
escreva(" Digite a 1º nota: ")
leia(nota1)
escreva(" Digite a 2º nota: ")
leia(nota2)
escreva(" Digite a 3º nota: ")
leia(nota3)
escreva(" Digite a média dos exercícios: ")
leia(mediaex)
mediaap <- (nota1+nota2*2+nota3*3+mediaex)/7
Se (mediaap>=9) entao
   escreva(" O aluno: ", aluno, " Tirou nota A e está APROVADO. ")
senao
se (mediaap>=7.5) e (mediaap<9) entao
   escreva(" O aluno: ", aluno, " Tirou nota B e está APROVADO. ")
senao
se (mediaap>=6) e (mediaap<7.5) entao
   escreva(" O aluno: ", aluno, " Tirou nota C e está APROVADO. ")
senao
se (mediaap>=4) e (mediaap<6) entao
   escreva(" O aluno: ", aluno, " Tirou nota D e está REPROVADO. ")
senao
se (mediaap<4) entao
   escreva(" O aluno: ", aluno, " Tirou nota E e está REPROVADO. ")
fimse
fimse
fimse
fimse
fimse

fimalgoritmo
