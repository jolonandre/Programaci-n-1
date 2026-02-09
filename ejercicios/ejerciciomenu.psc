Algoritmo Cafeteria_Menu
	Definir opcion Como Entero
	Definir total Como Real
	Definir contCafe, contTe, contSandwich, contPan, contPastel Como Entero
	total <- 0
	contCafe <- 0
	contTe <- 0
	contSandwich <- 0
	contPan <- 0
	contPastel <- 0
	Repetir
		Escribir 'Menu de cafeteria'
		Escribir '1. Café        Q10'
		Escribir '2. Té          Q8'
		Escribir '3. Sandwich    Q25'
		Escribir '4. Pan dulce   Q5'
		Escribir '5. Pastel      Q20'
		Escribir '0. Finalizar compra'
		Escribir 'Seleccione una opción: '
		Leer opcion
		Según opcion Hacer
			1:
				total <- total+10
				contCafe <- contCafe+1
			2:
				total <- total+8
				contTe <- contTe+1
			3:
				total <- total+25
				contSandwich <- contSandwich+1
			4:
				total <- total+5
				contPan <- contPan+1
			5:
				total <- total+20
				contPastel <- contPastel+1
			0:
			De Otro Modo:
				Escribir 'Opción inválida'
		FinSegún
	Hasta Que opcion=0
	Escribir 'TOTAL A PAGAR: Q', total
FinAlgoritmo
