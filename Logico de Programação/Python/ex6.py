#Caixa Registradora
num = 1
soma = 0
troco = 0
money = 0
continua = 's'
while continua == 's'] :
	print("_____________________________")
	while (num != 0) :
		num = float(input("\nDigite o valor do produto: "))
		soma += num
	
	while money < soma :
		print("_____________________________")
		money = float(input("\nDigite o dinheiro recebido : "))
		troco = money - soma
		if money < soma :
			print("Total a pagar : ", soma)
			print("Falta dinheiro \n")
		else :
			print("Total a pagar : \n", soma)
			print("Troco : ", troco)
			print("_____________________________")
	continua = str(input("\nDeseja realizar outra compra ? s/n "))