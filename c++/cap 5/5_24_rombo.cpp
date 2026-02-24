#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero impar: ";
    cin >> n;

    int mitad = n / 2;

    for (int i = 0; i <= mitad; i++) {
        for (int s = 0; s < mitad - i; s++)
            cout << " ";
        for (int a = 0; a < 2*i + 1; a++)
            cout << "*";
        cout << endl;
    }

    for (int i = mitad - 1; i >= 0; i--) {
        for (int s = 0; s < mitad - i; s++)
            cout << " ";
        for (int a = 0; a < 2*i + 1; a++)
            cout << "*";
        cout << endl;
    }

    return 0;
}