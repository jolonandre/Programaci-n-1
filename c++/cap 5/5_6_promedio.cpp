#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0, contador = 0;
    cout << "Ingrese numeros (9999 para terminar): ";
    cin >> numero;

    while (numero != 9999) {
        suma += numero;
        contador++;
        cin >> numero;
    }

    if (contador > 0)
        cout << "Promedio: " << suma / contador << endl;
    else
        cout << "No se ingresaron numeros." << endl;

    return 0;
}