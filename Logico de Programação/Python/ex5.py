#KM/H
km = int(input("\nDigite a distancia percorrida :"))
horas = int(input("\nDigite o tempo de viagem :"))
media = km/horas
if media <= 110 :
	print("\nVelocidade abaixo de 110KM/H :", media)
else :
	print("\nVelocidade acima de 110KM/H :", media)