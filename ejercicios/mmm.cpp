// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float alambret;
	float ancho;
	float area;
	float costometro;
	float largo;
	float perimetro;
	float precioterrreno;
	cout << "Ingrese el ancho del terreno" << endl;
	cin >> ancho;
	cout << "Ingrese el largo del terreno" << endl;
	cin >> largo;
	cout << "Ingrese el precio por metro2" << endl;
	cin >> costometro;
	area = ancho*largo;
	precioterrreno = area*costometro;
	perimetro = (ancho*2)+(largo*2);
	alambret = perimetro*3;
	cout << "El precio del terreno es: " << precioterrreno << endl;
	cout << "Metros necesarios de alambre: " << alambret << endl;
	return 0;
}

