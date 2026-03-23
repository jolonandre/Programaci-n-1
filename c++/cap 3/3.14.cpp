#include <iostream>
using namespace std;

class Empleado {
private:
    string mNombre, mApellido;
    double mSueldoMensual;

public:
    // Constructor
    Empleado(string nombre, string apellido, double sueldoMensual) {
        mNombre = nombre;
        mApellido = apellido;

        if (sueldoMensual > 0)
            mSueldoMensual = sueldoMensual;
        else {
            mSueldoMensual = 0;
            cout << "Error: sueldo invalido." << endl;
        }
    }

    // Getters
    string getNombre() const { return mNombre; }
    string getApellido() const { return mApellido; }
    double getSueldoMensual() const { return mSueldoMensual; }

    // Salario anual
    double getSalarioAnual() const {
        return mSueldoMensual * 12;
    }

    // Aumento del 10%
    void aplicarAumento() {
        mSueldoMensual *= 1.10;
    }
};

int main() {
    Empleado emp1("Juan", "Perez", 3000);
    Empleado emp2("Maria", "Lopez", 4000);

    cout << "Empleado 1: " << emp1.getNombre() << " " << emp1.getApellido() << endl;
    cout << "Salario anual: " << emp1.getSalarioAnual() << endl;

    cout << "\nEmpleado 2: " << emp2.getNombre() << " " << emp2.getApellido() << endl;
    cout << "Salario anual: " << emp2.getSalarioAnual() << endl;

    // Aplicar aumento
    emp1.aplicarAumento();
    emp2.aplicarAumento();

    cout << "\nDespues del aumento" << endl;

    cout << "Empleado 1 nuevo salario mensual: " << emp1.getSueldoMensual() << endl;
    cout << "Empleado 2 nuevo salario mensual: " << emp2.getSueldoMensual() << endl;

    return 0;
}
