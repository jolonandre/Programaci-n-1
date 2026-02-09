Algoritmo momentodia
	definir hora Como Entero
	escribir "Ingrese la hora que desee(0-23): "
	Leer hora
	
	si hora < 0 o hora > 23 Entonces
		Escribir "no se la hora no es valida"
	SiNo
		si hora >= 0 Y hora <= 5 Entonces
			Escribir "Momento del dia: madrugada"
		SiNo
			si hora >= 6 Y hora <= 11 Entonces
				Escribir "Momento del dia: Mañana"
			SiNo
				si hora >= 12 Y hora <= 13 Entonces
					Escribir "Momento del dia: Mediodia"
				SiNo
					si hora >= 14 Y hora <= 19 Entonces
						Escribir "Momento del dia: Tarde"
					SiNo
						si hora >= 20 Y hora <= 23 Entonces
							Escribir "Momento del dia: Noche"
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo
