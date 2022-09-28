#Preço 2 Produtos
nome1 = input("Digite o nome do 1º produto\n")
preco1 = float(input("Digite o preço do 1º produto\n"))
nome2 = input("Digite o nome do 2º produto\n")
preco2 = float(input("Digite o preço do 2º produto\n"))
if preco1>preco2 :
	print("Nome : ", nome1, "\nPreço :", preco1, "\n é o maior")
elif preco2>preco1 :
	print("Nome : ", nome2, "\nPreço :", preco2, "\n é o maior")