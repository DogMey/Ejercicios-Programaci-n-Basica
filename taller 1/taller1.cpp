// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float a;
	float b;
	float c;
	string i;
	float j;
	float k;
	float l;
	float u;
	float x1;
	float x2;
	cout << "Teniendo en cuenta que la forma natural de una funcion cuadratica es ax^2+bx+c" << endl;
	cout << "En su funcion cual es a?" << endl;
	cin >> a;
	if (a==0) {
		cout << "No se puede realizar la operacion ya que el primer termino (a) es 0 y se generaria una solucion indeterminada por division en 0" << endl;
		do {
			cout << "Ingrese otro valor para a" << endl;
			cin >> a;
		} while (a==0);
	}
	cout << "Cual es b?" << endl;
	cin >> b;
	cout << "Cual es c?" << endl;
	cin >> c;
	j = -1*b;
	l = 2*a;
	u = (pow(b,2))-(4*a*c);
	if (u>=0) {
		k = sqrtf(u);
		x1 = (j+k)/l;
		x2 = (j-k)/l;
		if (x1==x2) {
			cout << "Su funcion solo tiene un punto de corte en el eje x y es: " << x1 << endl;
		} else {
			cout << "El primer corte de su funcion es: " << x1 << endl;
			cout << "El segundo corte de su funcion es: " << x2 << endl;
		}
	} else {
		u = u*(-1);
		k = sqrtf(u);
		x1 = (j+k)/l;
		x2 = (j-k)/l;
		if (x1==x2) {
			cout << "Su funcion solo tiene un punto de corte, sin embargo es un punto imaginario, que es: " << x1 << "i" << endl;
		} else {
			cout << "Su funcion tiene solucion de puntos imaginarios, el primer punto es: " << x1 << "i" << endl;
			cout << "Y su segundo punto de corte de su funcion es: " << x2 << "i" << endl;
		}
	}
	return 0;
}

