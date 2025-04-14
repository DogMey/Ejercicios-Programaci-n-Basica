// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
#define SIN_TIPO string

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

// Declaraciones adelantadas de las funciones
SIN_TIPO vf1(float c, float i, SIN_TIPO in);

SIN_TIPO vf1(float c, float i, SIN_TIPO in) {
	float n;
	float ti;
	float vf;
	float x;
	while (x<n) {
		i = c*ti;
		vf = c+i;
		x = x+1;
	}
	cout << vf << endl;
	return valor_final;
}

int main() {
	float c;
	float i;
	float in;
	SIN_TIPO n;
	float ti;
	float vf;
	float x;
	cout << "Capital" << endl;
	cin >> c;
	cout << "Años" << endl;
	cin >> n;
	cout << "Tasa de interes" << endl;
	cin >> ti;
	x = 0;
	ti = ti/100;
	cout << "valor final es: " << vf1(c,i,in) << endl;
	return 0;
}

