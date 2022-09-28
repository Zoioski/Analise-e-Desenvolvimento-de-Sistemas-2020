algoritmo "GrupoDePessoas"
//Para um grupo indeterminado de pessoas, o algoritmo deve descobrir:
//a) o nome da pessoa mais alta
//b) o nome da pessoa mais baixa
//c) o nome da mulher mais nova
//d) o nome do homem mais velho
//O algoritmo deverá encerrar quando o usuário não desejar mais informar os dados de pessoas.
var
nome, grupo, genero : caracter
mulherNova, homemVelho : inteiro
idade : inteiro
altura, mAlta, mBaixa : real
fim : inteiro
nomeAlta, nomeBaixa, nomeMN, nomeHV : caracter

inicio
// Seção de Comandos
mulherNova <- 100
homemVelho <- 0
mAlta <- 0
mBaixa <- 10
fim <- 1
grupo <- "S"

enquanto grupo = "S" faca
   escreval(" Digite o nome: ")
   leia(nome)
   escreval("")
   escreval(" Sexo: M/F" )
   leia(genero)
   escreval("")
   escreval(" Digite a idade: ")
   leia(idade)
   escreval("")
   escreval(" Digite a altura: ")
   leia(altura)
   escreval("")
   limpatela
   escreval("")
   se (mAlta < altura) entao
      mAlta <- altura
      nomeAlta <- nome
   fimse
   se (mBaixa > altura) entao
      mBaixa <- altura
      nomeBaixa <- nome
   fimse
   se (genero = "F") e (mulherNova > idade) entao
      mulherNova <- idade
      nomeMN <- nome
   fimse
   se (genero = "M") e (homemVelho < idade) entao
      homemVelho <- idade
      nomeHV <- nome
   fimse
   escreval(" Deseja continuar ? S/N ")
   leia(grupo)
   escreval("")
   limpatela
   escreval("")
fimenquanto
escreval(" O nome da pessoa mais alta: ", nomeAlta,", com: ", mAlta)
escreval("")
escreval(" O nome da pessoa mais baixa: ", nomeBaixa,", com: ", mBaixa)
escreval("")
escreval(" O nome da mulher mais nova: ", nomeMN,", com: ", mulherNova)
escreval("")
escreval(" O nome do homem mais velho: ", nomeHV,", com: ", homemVelho)
escreval("")




fimalgoritmo
