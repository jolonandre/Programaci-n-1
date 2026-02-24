#include <iostream>
using namespace std;

int main() {
    int producto, cantidad;
    double total = 0;

    cout << "Producto (1-5, 0 para salir): ";
    cin >> producto;

    while (producto != 0) {
        cin >> cantidad;

        if (producto == 1) total += 2.98 * cantidad;
        if (producto == 2) total += 4.50 * cantidad;
        if (producto == 3) total += 9.98 * cantidad;
        if (producto == 4) total += 4.49 * cantidad;
        if (producto == 5) total += 6.87 * cantidad;

        cout << "Producto (0 para salir): ";
        cin >> producto;
    }

    cout << "Total de ventas: $" << total << endl;
    return 0;
}