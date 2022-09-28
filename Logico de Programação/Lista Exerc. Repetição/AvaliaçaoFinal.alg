algoritmo "semnome"
//O sistema de avaliação de uma determinada disciplina obedece aos seguintes critérios:
//- durante o semestre são dadas três notas;
//- a nota final é obtida pela média aritmética das notas dadas durante o curso;
//- é considerado aprovado o aluno que obtiver a nota final superior ou igual a 60 e que tiver comparecido a um mínimo de 40 aulas.
//Fazer um algoritmo que:
//a.) Leia um conjunto de dados contendo o número de matrícula, as três notas e a freqüência (número de
//aulas frequentadas) de 100 alunos.
//b.) Calcule:
//o a nota final de cada aluno;
//o a maior e a menor nota do grupo de alunos;
//o a média das notas do grupo de alunos;
//o as quantidades de alunos aprovados e reprovados;
var
avaliacao, aluno : inteiro
nota1, nota2, nota3, frequencia, mediagrupo, mediageral : real
media, maiorN, menorN, Ap, Rp : real
matricula : caracter

inicio
// Seção de Comandos
escreval(" Quantos alunos são: ")
leia(aluno)
para avaliacao de 1 ate aluno faca
   escreval(" Matrícula do Aluno: ")
   leia(matricula)
   escreval(" Digita a 1º nota: ")
   leia(nota1)
   escreval(" Digite a 2º nota: ")
   leia(nota2)
   escreval(" Digite a 3º nota: ")
   leia(nota3)
   escreval(" Qual a frequência do Aluno: ")
   leia(frequencia)
   media <- (nota1 + nota2 + nota3)/3
   mediageral <- mediageral + media
   se (maiorN < media) entao
      maiorN <- media
   fimse
   menorN <- 100
   se (menorN > media) entao
      menorN <- media
   senao
      menorN <- menorN
   fimse
   se (media >= 60 ) e ( frequencia >= 40 )  entao
      escreval("Matrícula: ", matricula," Teve média de: ", media:3:2," e esta APROVADO")
      ap <- ap + 1
   senao
      escreval("Matrícula: ", matricula," Teve média de: ", media:3:2," e esta REPROVADO")
      rp <- rp + 1
   fimse
fimpara
mediagrupo <- mediageral / aluno
escreval(" A maior nota do grupo: ", maiorN:3:2," A menor nota do grupo: ", menorN:3:2)
escreval(" A média das notas do grupo: ", mediagrupo:3:2)
escreval(" Quantidade de alunos aprovados: ", ap," / Reprovados: ", rp)


fimalgoritmo
