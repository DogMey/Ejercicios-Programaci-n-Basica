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

int main() {
	int a;
	int b;
	int c;
	float i;
	int n;
	b = 1;
	a = 0;
	c = 0;
	cout << "ingrese el numero enesimo que quiere encontrar de la serie de fibonacci" << endl;
	cin >> n;
	if (n<=0) {
		if (n<0) {
			cout << "la secuencia de fibonacci no cuenta con numeros negativos" << endl;
		} else {
			cout << "El numero que usted introdujo fue " << n << ". Este es el numero enesimo de la serie de fibonacci " << 0 << endl;
		}
	} else {
		cout << "Este es la sucesion del codigo de fibonacci hasya su enesima expresion:" << endl;
		do {
			cout << c << endl;
			a = b;
			b = c;
			c = a+b;
			i = i+1;
		} while (i!=n);
		cout << "El numero que usted introdujo fue " << n << ". Este es el numero enesimo de la serie de fibonacci " << b << endl;
	}
	return 0;
}

