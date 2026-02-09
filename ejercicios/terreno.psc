Algoritmo terreno
	Definir ancho, largo, costometro Como Real
	definir area, precioterrreno, perimetro, alambreT Como Real
	
	Escribir "Ingrese el ancho del terreno"
	Leer ancho
	Escribir "Ingrese el largo del terreno"
	Leer largo
	Escribir "Ingrese el precio por metro2"
	Leer costometro
	
	area <- ancho * largo
	precioterrreno <- area * costometro
	perimetro <- (ancho *  2) + (largo * 2)
	alambreT <- perimetro * 3
	
	Escribir "El precio del terreno es: ",precioterrreno
	Escribir "Metros necesarios de alambre: ",alambreT
FinAlgoritmo
