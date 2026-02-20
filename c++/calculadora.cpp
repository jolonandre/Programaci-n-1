#include <iostream>

using namespace std;

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

    if(opcion == 1) {
        resultado = num1 + num2;
        cout << "Resultado: " << resultado << endl;
    }
    else if(opcion == 2) {
        resultado = num1 - num2;
        cout << "Resultado: " << resultado << endl;
    }
    else if(opcion == 3) {
        resultado = num1 * num2;
        cout << "Resultado: " << resultado << endl;
    }
    else if(opcion == 4) {
        if(num2 != 0) {
            resultado = num1 / num2;
            cout << "Resultado: " << resultado << endl;
        } else {
            cout << "No se puede dividir entre cero." << endl;
        }
    }
    else {
        cout << "Opcion no valida." << endl;
    }

    return 0;
}
