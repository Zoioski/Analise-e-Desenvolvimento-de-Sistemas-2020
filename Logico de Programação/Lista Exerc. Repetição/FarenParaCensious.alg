algoritmo "FarenParaCelsius"
//A conversão de graus Farenheit para centígrados é obtida pela seguinte fórmula:
//                                  C = 5/9 (F -32)
//Elabore um algoritmo que calcule e escreva uma tabela de centígrados em função de graus Farenheit, que
//variam de 50 a 150 de 1 em 1.
var
FG : inteiro
faren : real
cal : real
inicio
// Seção de Comandos
escreval(" Digite o valor em Farenheit: ")
leia(faren)
para FG de 50 ate 150 faca
     cal <- (5* (faren - 32)/ 9)
     escreval("Censius: ", cal:2:2)
     faren <- faren + 1
fimpara
fimalgoritmo
