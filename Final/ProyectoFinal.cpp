#include<iostream>//Control de flujo de datos
#include<fstream>//Control y manipulacion de archivos
#include<sstream> //Nos ayudara para convertir un char en int
using namespace std;

void lectura();
void entorno();
void cadenapasos();
void movi();
void comprobar();
void girarI();
void girarD();
void win();

int m,n,a,b,x,y,robot=2,mov,meta=3,mapa[100][100];;//definimos variables de manera global para facilitar su manipulación 
char orientacion,pasos[40];
bool f=true, gg=true;
string nombreArchivo = "robot.txt",texto, temppasos;
	
int main(){
	lectura();//Llamamos a la funcion lectura encargada de leer algunos datos del documento
	cout<<"m = " <<m<<" n = "<<n<<endl;//Mostramos al usuario todas las variables obtenidas
	cout<<"a = " <<a<<" b = "<<b<<endl;
	cout<<"x = " <<x<<" y = "<<y<<endl<<endl;
	cout<<"orientacion inicial: "<<orientacion<<endl;
	cout<<"Numero de movimientos disponibles: "<<mov<<endl;
	
	entorno();//Llamamos una funcion que leera los datos de la matriz
	
	cadenapasos();//Llamamos una funcion para leer y guardar en el arreglo los pasos
	for(int h = 0; h < mov; h++){
		cout<<pasos[h]<<" ";//Mostramos el arreglo
	}
	cout<<endl<<endl;
	a=a-1;b=b-1;x=x-1;y=y-1;//Le restamos una unidad a las ubicaciones teniendo en cuenta que el mapa cuenta el 0
	mapa[a][b]=robot;//Asignamos los valores a robot y meta
	mapa[x][y]=meta;
	char z;//Creamos una variable para igualar y así facilitar el analisis del arreglo de pasos
	
	cout<<"Este es el mapa del robot y su orientacion inicial... ¡Suerte!"<<endl<<endl;//Mensaje de animos :3
	cout<<orientacion<<endl;//Mostramos la orientacion inicial
	for(int i = 0; i < m; i++){//Mostramos la matriz completada
		for(int j = 0; j < n; j++){
		cout<<mapa[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	system("pause");//Realizamos una pausa cada que se termina una ejecucion
	
	for(int q=0; q<=mov; q++){//Empezamos a leer el arreglo 
		z=pasos[q];//Igualamos la variable con la posicion para luego comparar
		if(z=='A'){
			movi();//Llamamos a la funcion movi
			cout<<z<<orientacion<<endl;//Mostramos orientacion y accion realizada
			for(int i = 0; i < m; i++){//Mostramos la matriz completada
				for(int j = 0; j < n; j++){
				cout<<mapa[i][j]<<" ";
				}
			cout<<endl;
			}
			cout<<endl;
			system("pause");
				if(f==false){//La funcion comprobar ligada a la funcion mov confirmara si el robot muere o no, si sí se destruye entonces damos la señal
					cout<<"EL ROBOT SE DESTRUYO";
					ofstream file;
					file.open("ROBCOM.txt");//En el archivo ROBCOM mostramos una E y cerramos el programa
					file << "E";
					file.close();
					exit(1);
				}
			cout<<endl;
		}
		if(z=='I'){
			cout<<endl;
			girarI();//Llamamos a la funcion girarI
			cout<<z<<orientacion<<endl;//Mostramos orientacion y accion realizada
			for(int i = 0; i < m; i++){//Mostramos la matriz completada
				for(int j = 0; j < n; j++){
				cout<<mapa[i][j]<<" ";
				}
			cout<<endl;
			}
			cout<<endl;
			system("pause");//Realizamos una pausa cada que se termina una ejecucion
		}
		if(z=='D'){
			cout<<endl;
			girarD();//Llamamos a la funcion girarD
			cout<<z<<orientacion<<endl;//Mostramos orientacion y accion realizada
			for(int i = 0; i < m; i++){//Mostramos la matriz completada
				for(int j = 0; j < n; j++){
				cout<<mapa[i][j]<<" ";
				}
			cout<<endl;
			}
			cout<<endl;
			system("pause");//Realizamos una pausa cada que se termina una ejecucion
			cout<<endl;
		}
	}
	win();//Despues de terminar todos los pasos rectifica si sí se llego
	if(gg==true){//Si llega manda mensaje y muestra letra C en documento
		cout<<"GANASTE :3"<<endl;
		ofstream file;
		file.open("ROBCOM.txt");
		file << "C";
		file.close();//Cerramos el archivo
	}
	else{
		cout<<"PERDISTE :(";//Si no llega manda mensaje fallido e indica en el documento con una E
		ofstream file;
		file.open("ROBCOM.txt");
		file << "E";
		file.close();
	}
	return 0;
}

void lectura(){
	int count = 0;
		
	ifstream archivo;	
	archivo.open(nombreArchivo.c_str(),ios::in); //Abrimos el archivo en modo lectura
	
	if(archivo.fail()){//Si no se logro mandamos un mensaje al usiario indicandolo
		cout<<"No se pudo abrir el archivo";
		exit(1);// Cerramos el programa
	}
	
	while(!archivo.eof()){ //Mientras no sea final del archivo:
		getline(archivo,texto);//Obtenemos linea
		switch(count){//Entramos a la primera linea
			case 0:{
			string s (texto);//Definimos el texto de la linea como una cadena
			m = (int)s[0] - 48;//Definimos m transformandolo a un numero y referenciandolo con su posicion
			n = (int)s[2] - 48;//Definimos n transformandolo a un numero y referenciandolo con su posicion 
			break;
			}
		}
		if(count==m+1){//Nos saltamos las lineas de la matriz teniendo en cuenta las filas definidas anteriormente y leemos siguientes variables
			string s (texto);
			a = (int)s[0] - 48;//Definimos a transformandolo a un numero y referenciandolo con su posicion
			b = (int)s[2] - 48;//Definimos b transformandolo a un numero y referenciandolo con su posicion
		}
		if(count==m+2){//Aca definimos lso valores de la posicion de la meta
			string s (texto);
			x = (int)s[0] - 48;//Definimos x transformandolo a un numero y referenciandolo con su posicion
			y = (int)s[2] - 48;//Definimos y transformandolo a un numero y referenciandolo con su posicion
		}
		if(count==m+3){
			string s (texto);
			orientacion=s[0];//Leemos la orientacion inicial sin transformarlo a int, ya que es un char		
		}
		if(count==m+4){
			string s (texto);
			temppasos = s[0];//Definimos el primer caracter en char
			temppasos = temppasos + s[1];//Lo concatenamos con el siguiente
			stringstream geek(temppasos); //Convierte cadenas de carcatreres en numeros
			geek>>mov;//Definimos el número de pasos
		}
		count++;
	}
	archivo.close();//Cerramos el archivo
}

void cadenapasos(){
	
	int count=0;
	ifstream archivo;
	archivo.open(nombreArchivo.c_str(),ios::in);//abrimos el archivo
	
	while(!archivo.eof()){//Mientras no sea final del documento
		getline(archivo,texto);//Obtenemos linea
		if(count==m+5){//Cuando este en la ultima linea
			for(int i = 0; i <= (mov-1)*2; i=i+2){//Realizamos un patron desde 0, saltando de a 2 para evitar espacios en blanco
				string s (texto);//Creamos la cadena
				pasos[i/2] = s[i];//la llenamos con los valores
				//cout<<"Pasos["<<i/2<<"]:"<<s[i];
			}
			cout<<endl;
		}
		count++;
	}
	archivo.close();//Cerramos el archivo
}

void entorno(){
	ifstream archivo;
	archivo.open(nombreArchivo.c_str(),ios::in);//abrimos el archivo
	int count = 0;//Creamos un contador local
	
	while(!archivo.eof()){//Mientras no sea final del archivo
		getline(archivo,texto);//Obtenemos linea
		if(count > 0 && count <= m){//Mientras este en el rango donde este la matriz
			string s (texto);
			for(int i = 0; i <= (n-1)*2; i=i+2){//Con la misma logica de la cadena nos saltamos espacios en blanco
				mapa[count-1][i/2] = (int)s[i] - 48;//Leemos el valor de cada columna
			}
		}
		count++;
	}
}

void movi(){
	
	if(orientacion=='N'){//Partiendo de la orientacion cambia el valor de la matriz en la posicion del robot para simular movimiento
		mapa[a][b]=0;//Se deja en la posicion inicial un 0 para mejor entendimiento
		a=a-1;
		mapa[a][b]=robot+mapa[a][b];//Se cambia el valor de la posicion y se suma con la que esta para poder rectificar posteriormente
	}
	if(orientacion=='E'){
		mapa[a][b]=0;
		b=b+1;
		mapa[a][b]=robot+mapa[a][b];
	}
	if(orientacion=='S'){
		mapa[a][b]=0;
		a=a+1;
		mapa[a][b]=robot+mapa[a][b];
	}
	if(orientacion=='O'){
		mapa[a][b]=0;
		b=b-1;
		mapa[a][b]=robot+mapa[a][b];//Es igual con todos los movimientos :3
	} 
	comprobar();//Llamamos la funcion comprobar
}

void comprobar(){
	if((a<0 || b<0)||(a>m-1 || b>n-1)||(mapa[a][b]==3)){//Comparamos los valores de la posicion del robot para que no se halla desbordado ni posicionado en una bomba
		f=false;
	}
}

void girarD(){
	switch(orientacion){//Se asignan los cambios de la orientacion para trabajar con el robot
		case 'N': orientacion='E';
		break;
		case 'E': orientacion='S';
		break; 
		case 'S': orientacion='O';
		break;
		case 'O': orientacion='N';
		break;	
	}
}

void girarI(){
	switch(orientacion){//Se asignan los cambios de la orientacion para trabajar con el robot
		case 'N': orientacion='O';
		break;
		case 'E': orientacion='N';
		break; 
		case 'S': orientacion='E';
		break;
		case 'O': orientacion='S';
		break;	
	}
}

void win(){
	if(a!=x && b!=y){//Rectificamos si la posicion de meta y robot es la misma
		gg=false;
	}
}
