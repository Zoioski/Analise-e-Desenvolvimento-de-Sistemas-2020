algoritmo "BonusTempoEmp"
//Uma empresa decide presentear seus funcionários com um bônus, cujo valor é definido da seguinte forma:
//- os funcionários com tempo de casa superior a 15 anos terão direito a um bônus de 20% de seu salário;
//- os funcionários com tempo de casa entre 10 e 15 anos e que participaram das ações comunitárias
//realizadas pela empresa durante o ano terão direito a um bônus de 25% de seu salário;
//- os demais funcionários terão direito a um bônus de R$ 500,00.
//Ao iniciar, o algoritmo deverá solicitar ao usuário que informe a quantidade de funcionários a serem
//considerados no cálculo.
//Elabore um algoritmo que calcule o valor do bônus concedido a cada funcionário e o impacto no orçamento
//da empresa, ou seja, a soma total dos bônus concedidos.
var
anos, emp, n, AA : inteiro
bonus, salario, impacto : real
sc, func : caracter

inicio
// Seção de Comandos
escreval(" Quantos funcionários tem na empresa: ")
leia(n)
limpatela
para emp de 1 ate n faca
   escreval(" Digite o nome do funcionário: ")
   leia(func)
   escreval(" Tempo de empresa: ")
   leia(anos)
   escreval(" Digite o valor do salário: ")
   leia(salario)
   AA <- 0
   se (anos > 15) entao
      bonus <- salario * 0.20
      escreval(" O funcionário: ", func, " irá receber: ", bonus," de bonus.")
      escreval("")
   fimse
   se (anos > 10) e (anos <= 15) entao
      AA <- AA +1
   fimse
   se (anos < 10) entao
      salario <- bonus
      escreval(" O funcionário: ", func," irá reveber: ", bonus," de bonus.")
      escreval("")
   fimse
   se (AA <> 0) entao
      escreval(" Participou de serviço comunitário: s/n ")
      leia(sc)
      se (sc = "s") entao
         bonus <- salario * 0.25
         escreval(" O funcionário: ", func," irá receber: ", bonus," de bonus.")
         escreval("")
      senao
         se (sc = "n") entao
            bonus <- 500
            escreval(" O funcionário: ", func," irá receber: ", bonus," de bonus.")
            escreval("")
         fimse
      fimse
   fimse
   impacto <- impacto + bonus
fimpara
Escreval("Valor do impacto no orçamento da empresa: ", impacto)

fimalgoritmo


