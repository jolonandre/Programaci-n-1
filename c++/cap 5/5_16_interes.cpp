#include <iostream>
using namespace std;

int main() {
    double principal = 1000;
    double tasa = 0.05;

    for (int anio = 1; anio <= 10; anio++) {
        principal = principal * (1 + tasa);
        cout << "Anio " << anio << ": $" << principal << endl;
    }

    return 0;
}