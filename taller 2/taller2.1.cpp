// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

// Declaraciones adelantadas de las funciones
SIN_TIPO mcm(float x, float a, float b, float c);
SIN_TIPO mcd(float x, float a, float b, float c);

SIN_TIPO mcm(float x, float a, float b, float c) {
	while ((x%a!=0) || (x%b!=0) || (x%c!=0)) {
		x = x+1;
	}
	cout << "El MCM de sus números seleccionados es: " << x << endl;
	return minimo_común_multiplo;
}

SIN_TIPO mcd(float x, float a, float b, float c) {
	while ((a%x!=0) || (b%x!=0) || (c%x!=0)) {
		x = x-1;
	}
	cout << "El MCD de sus números es: " << x << endl;
	return maximo_común_divisor;
}

int main() {
	int a;
	int b;
	int c;
	int x;
	while (a<=0) {
		cout << "Ingrese su primer número" << endl;
		cin >> a;
	}
	while (b<=0) {
		cout << "Ingrese su primer número" << endl;
		cin >> b;
	}
	while (c<=0) {
		cout << "Ingrese su primer número" << endl;
		cin >> c;
	}
	if (a>b && b>c) {
		x = a;
	}
	if (b>a && a>c) {
		x = b;
	} else {
		x = c;
	}
	cout << "El MCD de su número es: " << mcd(x,a,b,c) << endl;
	cout << "El mcm de su número es: " << mcm(x,a,b,c) << endl;
	return 0;
}

