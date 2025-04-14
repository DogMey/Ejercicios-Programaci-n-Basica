#include<iostream>
#include<stdio.h>
#include <stdlib.h>
#define CM(x, N) ((x)<0 ? N+(x)%N : ((x)>=N ? (x)%N :(x)))

using namespace std;

int main(void)
{
 int cuadrado[300][300]={0};
 int x,y,n,N;
 char continuar;
 
   do {
     
 cout<<"ingrese el orden (impar entre 3 y 15) : \n"; // imprime texto
 cin>>N;  // guarda una varible
 if(!(n%2));
 cout<<"\nCuadrado magico de orden"<<N<<"x"<<N<<" :\n\n";
 
 for(x=0;x<N;x++)
 for(y=0;y<N;y++)
 cuadrado[x][y]=0;
 
 for(x=N/2,y=0,n=1; n<=N*N;) //se hacen n*n iteraciones
 if(!cuadrado[x][y]) // si el elemento selecionado es cero
    cuadrado[x][y]=n++, //se agrega un numero natural
 x=CM(x+1,N), // incrementa x en 1
 y=CM(y-1,N);  // derementa y en 1
 else x=CM(x-1,N), // decrementa x en 1
      y=CM(y+2,N); // incrementa y en 2
  
 for(y=0;y<N;y++){
  cout<<"\n\n";
  for(x=0;x<N;x++)
  cout<<cuadrado[x][y]<<"\t";
 }cout<<"\n\n Suma = "<<((N*(N*N+1))/2)<<"\n\n"; //se suma las filas y columnas del cuadrado
       /* Pedimos confirmacion si se debe continuar */
      puts("Para continuar presiones 's' sino presione 'n' para salir\n");
      scanf(" %c", &continuar);
   }while (continuar == 'S' || continuar == 's');
   
   return EXIT_SUCCESS;
} //Cuadro Magico N*N es infinito
