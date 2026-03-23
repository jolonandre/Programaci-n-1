#include <iostream>
#include <ctime>
using namespace std;

class FrecuenciasCardiacas {
private:
    string mNombre, mApellido;
    int mDiaNac, mMesNac, mAnioNac;

public:
    // Constructor
    FrecuenciasCardiacas(string nombre, string apellido, int dia, int mes, int anio) {
        mNombre = nombre;
        mApellido = apellido;

        // Validación básica
        if (dia > 0 && dia <= 31 && mes > 0 && mes <= 12 && anio > 0) {
            mDiaNac = dia;
            mMesNac = mes;
            mAnioNac = anio;
        } else {
            cout << "Fecha invalida. Se asigno fecha por defecto (1/1/2000)." << endl;
            mDiaNac = 1;
            mMesNac = 1;
            mAnioNac = 2000;
        }
    }

    // Obtener edad considerando fecha actual
    int getEdad() const {
        time_t t = time(0);
        tm* now = localtime(&t);

        int anioActual = now->tm_year + 1900;
        int mesActual = now->tm_mon + 1;
        int diaActual = now->tm_mday;

        int edad = anioActual - mAnioNac;

        // Ajuste si aún no cumple años este año
        if (mesActual < mMesNac || (mesActual == mMesNac && diaActual < mDiaNac)) {
            edad--;
        }

        return edad;
    }

    // Frecuencia cardíaca máxima
    int getFrecuenciaMaxima() const {
        return 220 - getEdad();
    }

    // Rango esperado
    void mostrarRangoEsperado() const {
        int fMax = getFrecuenciaMaxima();
        double min = fMax * 0.50;
        double max = fMax * 0.85;

        cout << "Rango esperado: " << min << " - " << max << " ppm" << endl;
    }

    // Mostrar datos
    void mostrarDatos() const {
        cout << "Nombre: " << mNombre << " " << mApellido << endl;
        cout << "Edad: " << getEdad() << " anios" << endl;
        cout << "Frecuencia maxima: " << getFrecuenciaMaxima() << " ppm" << endl;
        mostrarRangoEsperado();
    }
};

int main() {
    FrecuenciasCardiacas persona("Juan", "Perez", 15, 5, 2000);

    persona.mostrarDatos();

    return 0;
}
