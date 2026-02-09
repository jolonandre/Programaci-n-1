Algoritmo menu
	Definir opcion Como Entero
	Definir total Como Real
	definir contcafe, contTe, contpastel, contSandwich, contpan Como Entero
	
	total <- 0
	contcafe <- 0
	contTe <- 0
	contSandwich <- 0
	contpastel <- 0
	contpan <- 0
	opcion <- 1
	
Mientras opcion <> 0 Hacer

	Escribir "Este es nuestro menú"
	Escribir "1.café   Q10.00 "
	Escribir "2.Té     Q8.00"
	Escribir "3.Pastel  Q15"
	Escribir "4.Sandwich   Q25.00"
	Escribir "5.pan    Q7.00"
	Escribir "0. salir del programa"
	Escribir " Seleccione una opcion: "
	Leer opcion
	
	Segun opcion Hacer
		
		1: total <- total +10
			contcafe <- contcafe +1
			
		2: total <- total + 8
			contTe <- contTe + 1
			
		3: total <- total + 15
			contpastel <- contpastel +1
			
		4: total <- total + 25
			contSandwich <- contSandwich + 1
			
		5: total <- total + 7
			contpan <- contpan + 1
			
		0: 
		De Otro Modo:
			escribir "opcion invalida"
	FinSegun
	
FinMientras

Escribir "Este es el total de su compra"
Escribir "cafes ", contcafe
Escribir "te" ,contTe
Escribir "sandwich: " ,contSandwich
Escribir "pastel: " , contpastel
Escribir "pan: " , contpan
Escribir " Total a pagar: " ,total

FinAlgoritmo
