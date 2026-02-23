#include <iostream>
using namespace std;

int main() {

    unsigned int producto = 5;
    unsigned int x = 5;

    producto *= x++;
    cout << "Producto: " << producto << endl;
    cout << "Valor final de x: " << x << endl;

    unsigned int cociente = 5;
    x = 5;

    cociente /= ++x;
    cout << "Cociente: " << cociente << endl;
    cout << "Valor final de x: " << x << endl;

    return 0;
}
