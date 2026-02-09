Algoritmo DesgloseQuetzales
	Definir monto, resto Como Entero
	Definir i, cantidad Como Entero
	Dimensionar valores(6)
	Dimensionar nombres(6)
	valores[1] <- 100
	valores[2] <- 50
	valores[3] <- 20
	valores[4] <- 10
	valores[5] <- 5
	valores[6] <- 1
	nombres[1] <- 'Q100'
	nombres[2] <- 'Q50'
	nombres[3] <- 'Q20'
	nombres[4] <- 'Q10'
	nombres[5] <- 'Q5'
	nombres[6] <- 'Q1'
	Escribir 'Ingrese el monto en quetzales:'
	Leer monto
	resto <- monto
	Escribir 'Desglose del monto:'
	Para i<-1 Hasta 6 Hacer
		cantidad <- Trunc(resto/valores[i])
		Si cantidad>0 Entonces
			Escribir cantidad, ' de ', nombres[i]
			resto <- resto-cantidad*valores[i]
		FinSi
	FinPara
FinAlgoritmo
