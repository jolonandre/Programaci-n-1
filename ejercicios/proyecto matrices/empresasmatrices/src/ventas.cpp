#include "ventas.h"
#include <iostream>
#include <iomanip>
#include <cstring>   // para memcpy
#include <cstdlib>   // para rand

void llamaCiclo()
{
    //Declaraci�n de matrices por cada grupo de empresas
    float matriz_empresa_1[NUMERO_EMPRESAS][NUMERO_MESES + 1];
    float matriz_empresa_2[NUMERO_EMPRESAS][NUMERO_MESES + 1];
    float matriz_empresa_3[NUMERO_EMPRESAS][NUMERO_MESES + 1];

    char opcion;
    bool repetir = true;

    float promedio_empresa_1;
    float promedio_empresa_2;
    float promedio_empresa_3;

    //Nombres de empresas
    char empresas[NUMERO_EMPRESAS][MAXIMA_LONGITUD_CADENA] = {"EmpresaA","EmpresaB","EmpresaC","EmpresaD","EmpresaE"};

    do
    {
        system("cls");

        promedio_empresa_1=0;
        promedio_empresa_2=0;
        promedio_empresa_3=0;

        cout << " Comparativo de Ventas de Empresas " << endl << endl;

        llenarMatriz(matriz_empresa_1);
        promedio_empresa_1 = imprimirMatriz(matriz_empresa_1, empresas, "Grupo de Empresas Norte");

        llenarMatriz(matriz_empresa_2);
        promedio_empresa_2 = imprimirMatriz(matriz_empresa_2, empresas, "Grupo de Empresas Centro");

        llenarMatriz(matriz_empresa_3);
        promedio_empresa_3 = imprimirMatriz(matriz_empresa_3, empresas, "Grupo de Empresas Sur");

        if (promedio_empresa_1 > promedio_empresa_2 && promedio_empresa_1 > promedio_empresa_3)
        {
            cout << " El grupo con mayores ventas es : " << "Grupo Norte" << " Promedio: " << promedio_empresa_1 << endl;
        }
        else if (promedio_empresa_2 > promedio_empresa_1 && promedio_empresa_2 > promedio_empresa_3)
        {
            cout << " El grupo con mayores ventas es : " << "Grupo Centro" << " Promedio: " << promedio_empresa_2 << endl;
        }
        else if (promedio_empresa_3 > promedio_empresa_2 && promedio_empresa_3 > promedio_empresa_1)
        {
            cout << " El grupo con mayores ventas es : " << "Grupo Sur" << " Promedio: " << promedio_empresa_3 << endl;
        }
        else
        {
            cout << " Algunos grupos tienen el mismo promedio de ventas " << endl << endl;
        }

        cout << "Desea otro calculo (s/n)? ";
        cin >> opcion;

        if (opcion == 'n')
        {
            repetir=false;
        }

    } while (repetir);
}

int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz(float matriz[NUMERO_EMPRESAS][NUMERO_MESES + 1])
{
    int y, x;

    for (y = 0; y < NUMERO_EMPRESAS; y++)
    {
        float suma = 0;
        int venta = 0;

        for (x = 0; x < NUMERO_MESES; x++)
        {
            venta = busquedaAleatorios(MIN_VENTA, MAX_VENTA);

            suma += (float)venta;
            matriz[y][x] = venta;
        }

        matriz[y][NUMERO_MESES] = suma;
    }
}

void imprimirMatrizLinea()
{
    int x;

    cout << "+--------";

    for (x = 0; x < NUMERO_MESES + 1; x++)
    {
        cout << "+---------";
    }

    cout << "+\n";
}

float imprimirMatriz(float matriz[NUMERO_EMPRESAS][NUMERO_MESES + 1], char empresas[NUMERO_EMPRESAS][MAXIMA_LONGITUD_CADENA], string nombreGrupo)
{
    int y, x;

    float ventaMayor = matriz[0][NUMERO_MESES];
    float ventaMenor = matriz[0][NUMERO_MESES];
    float totalGeneral = 0;
    float promedioGeneral = 0;

    char empresaMayor[MAXIMA_LONGITUD_CADENA];
    char empresaMenor[MAXIMA_LONGITUD_CADENA];

    memcpy(empresaMayor, empresas[0], MAXIMA_LONGITUD_CADENA);
    memcpy(empresaMenor, empresas[0], MAXIMA_LONGITUD_CADENA);

    cout << nombreGrupo << endl;
    cout << "(Venta1)=>Mes1  (Venta2)=>Mes2  (Venta3)=>Mes3  (Venta4)=>Mes4" << endl;

    imprimirMatrizLinea();

    cout << setw(9) << "Empresa";

    for (x = 0; x < NUMERO_MESES; x++)
    {
        cout << setw(9) << "Mes" << x + 1;
    }

    cout << setw(8) << "Tot" << endl;

    imprimirMatrizLinea();

    for (y = 0; y < NUMERO_EMPRESAS; y++)
    {
        cout << "!" << setw(8) << empresas[y] << "!";

        for (x = 0; x < NUMERO_MESES; x++)
        {
            int venta = matriz[y][x];
            cout << setw(9) << venta << "!";
        }

        float total = matriz[y][NUMERO_MESES];
        totalGeneral += matriz[y][NUMERO_MESES];

        if (total > ventaMayor)
        {
            ventaMayor = total;
            memcpy(empresaMayor, empresas[y], MAXIMA_LONGITUD_CADENA);
        }

        if (total < ventaMenor)
        {
            ventaMenor = total;
            memcpy(empresaMenor, empresas[y], MAXIMA_LONGITUD_CADENA);
        }

        cout << setw(9) << fixed << setprecision(2) << total << "!" << endl;

        imprimirMatrizLinea();
    }

    promedioGeneral = totalGeneral / NUMERO_EMPRESAS;

    cout << "Mayor venta: " << setw(10) << empresaMayor << setw(10) << ventaMayor << endl;
    cout << "Menor venta: " << setw(10) << empresaMenor << setw(10) << ventaMenor << endl;
    cout << "Promedio   : " << setw(10) << promedioGeneral << endl << endl;

    return promedioGeneral;
}
