#include <iostream>
using namespace std;

int main() {
    int cantidad, numero;
    cout << "Cuantos numeros ingresara? ";
    cin >> cantidad;

    cin >> numero;
    int menor = numero;

    for (int i = 1; i < cantidad; i++) {
        cin >> numero;
        if (numero < menor)
            menor = numero;
    }

    cout << "El menor es: " << menor << endl;
    return 0;
}