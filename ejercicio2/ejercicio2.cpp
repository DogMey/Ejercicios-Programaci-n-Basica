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
	int f;
	int i;
	int n;
	// El ejercicio nos exige al igual que la ley de factorial que los números que se trabajen sean enteros
	// Esto para aclarar que no se introduzcan decimales ni negativos
	cout << "Introduzca un numero natural al que quiera conocer su factorial" << endl;
	// Así se denominara al número al que se quiere encontrar el factorial
	cin >> n;
	// La ley de factorial pide que se inicie en 0, ademas así se confirma que 0! = 1
	f = 1;
	// Para contar el ciclo y sumar 1 hasta llegar a N, trabajandolo como un modelo de factorial
	i = 1;
	if (n>=0) {
		do {
			// Acá se confirma lo planeado, se multiplicaria por 1 en primer lugar
			f = f*i;
			// Se iria sumando 1 para trabajar solo números naturales
			i = i+1;
			// Se tomaria el limite de este procedimiento hasta que i sume tanto que pueda superar a N
		} while (i<=n);
		// El resultado que nos entregaria sería el numero que entregamos en primer lugar y el factorial que seria la multiplicacion de todos sus anteriores números desde 1
		cout << "El numero que usted escogio fue: " << n << "!" << " y su correspondiente factorial es: " << f << endl;
	} else {
		// Este limitante se hace ya que es imposible encontrar el factorial de negativos y decimales
		cout << "El numero ingresado no cumple con las condiciones, asegurese de que no sea negativo ni contenga numeros decimales" << endl;
	}
	return 0;
}

