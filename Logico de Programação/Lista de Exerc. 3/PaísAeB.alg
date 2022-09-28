algoritmo "PaísA/B"
//Supondo que a população de um país A seja 90 milhões de habitantes,
//crescendo com uma taxa anual de 3.5 % e que a população de um país B
//seja 140 milhões de habitantes, crescendo a uma taxa anual de 1 %. Faça
//um algoritmo que calcule e mostre quantos anos serão necessários para
//que a população do país A ultrapasse a população do país B.
var
A, B : real
anos : inteiro

inicio
// Seção de Comandos 
A <- 90000000
B <- 140000000
enquanto (A - B < 0) faca
A <- A * 0.035 + A
B <- B * 0.01 + B
Anos <- Anos + 1
fimenquanto
Escreval("País A ultrapassa o país B em: ", anos)

fimalgoritmo
