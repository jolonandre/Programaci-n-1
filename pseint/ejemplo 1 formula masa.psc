Algoritmo ejem1
	Definir c1 Como Real
	Definir c2 Como Real
	Definir presion Como Real
	Definir volumen Como Real
	Definir temperatura Como Real
	
	//constantes
	c1<-0.37
	c2<-460
	
	//Entrada de datos del usuario
	Escribir 'Ingrese la presion: '
	Leer presion
	Escribir 'Ingrese el volume: '
	Leer volumen
	Escribir 'Ingrese Temperatura'
	Leer temperatura
	
	//Proceso 
	masa<-(presion * volumen)/(c1 * temperatura + c2)
	
	//Salida de datos del usuario
	Escribir 'La masa resultante es: ', masa
	
FinAlgoritmo
