#include <iostream>
using namespace std;

float sumar(float a, float b);
float restar(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);

int main() {

    int opcion;
    float num1, num2, resultado;

    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch(opcion) {
        case 1:
            resultado = sumar(num1, num2);
            cout << "Resultado: " << resultado << endl;
            break;

        case 2:
            resultado = restar(num1, num2);
            cout << "Resultado: " << resultado << endl;
            break;

        case 3:
            resultado = multiplicar(num1, num2);
            cout << "Resultado: " << resultado << endl;
            break;

        case 4:
            if(num2 != 0) {
                resultado = dividir(num1, num2);
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "No se puede dividir entre cero." << endl;
            }
            break;

        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}

float sumar(float a, float b) {
    return a + b;
}

float restar(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}
