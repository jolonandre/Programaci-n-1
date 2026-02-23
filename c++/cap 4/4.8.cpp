#include <iostream>
using namespace std;

int main() {

    unsigned int x, y;
    unsigned int i = 1;
    unsigned int potencia = 1;

    cout << "Ingrese la base (x): ";
    cin >> x;

    cout << "Ingrese el exponente (y): ";
    cin >> y;

    while (i <= y) {
        potencia *= x;
        i++;
    }

    cout << "Resultado: " << potencia << endl;

    return 0;
}
