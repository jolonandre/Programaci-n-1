#ifndef VENTAS_H
#define VENTAS_H
#include <string>
using namespace std;

//Declaraci�n de Constantes
#define NUMERO_EMPRESAS 5
#define NUMERO_MESES 4
#define MAX_VENTA 100
#define MIN_VENTA 0
#define MAXIMA_LONGITUD_CADENA 100

//Declaraci�n de Prototipos de Funci�n
void llamaCiclo();
int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(float matriz[NUMERO_EMPRESAS][NUMERO_MESES + 1]);
void imprimirMatrizLinea();
float imprimirMatriz(float matriz[NUMERO_EMPRESAS][NUMERO_MESES + 1], char empresas[NUMERO_EMPRESAS][MAXIMA_LONGITUD_CADENA], string nombreGrupo);

#endif // VENTAS_H
