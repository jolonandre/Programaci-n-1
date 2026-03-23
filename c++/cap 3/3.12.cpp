#include <iostream>
using namespace std;

class Cuenta {
private:
    int mSaldo;

public:
    // Constructor
    Cuenta(int saldoInicial) {
        if (saldoInicial >= 0) {
            mSaldo = saldoInicial;
        } else {
            mSaldo = 0;
            cout << "Error: El saldo inicial era invalido." << endl;
        }
    }

    // Abonar dinero
    void abonar(int monto) {
        if (monto > 0) {
            mSaldo += monto;
        } else {
            cout << "Error: monto invalido para abonar." << endl;
        }
    }

    // Cargar (retirar) dinero
    void cargar(int monto) {
        if (monto <= 0) {
            cout << "Error: monto invalido para cargar." << endl;
        } else if (monto > mSaldo) {
            cout << "El monto a cargar excede el saldo de la cuenta." << endl;
        } else {
            mSaldo -= monto;
        }
    }

    // Obtener saldo
    int getSaldo() const {
        return mSaldo;
    }
};

int main() {
    // Crear cuenta con saldo inicial
    Cuenta cuenta1(1000);

    cout << "Saldo inicial: " << cuenta1.getSaldo() << endl;

    // Abonar dinero
    cuenta1.abonar(500);
    cout << "Saldo despues de abonar: " << cuenta1.getSaldo() << endl;

    // Cargar dinero
    cuenta1.cargar(300);
    cout << "Saldo despues de cargar: " << cuenta1.getSaldo() << endl;

    // Intento de error
    cuenta1.cargar(2000);

    return 0;
}
