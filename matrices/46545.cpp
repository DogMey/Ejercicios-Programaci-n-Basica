#include <stdio.h>
#include <stdlib.h>
#define CUANTOS 3
int main(int argc, char *argv[])
{
    int Matriz[CUANTOS][CUANTOS];
    int contador=0;
    int x=0;
    int y=0;
    int vx=0;
    int vy=0;
    int limite=CUANTOS*CUANTOS;
    int limitex = CUANTOS - 1;
    int limitey = CUANTOS - 1;
    for( x=0 ; x<CUANTOS ; x++)
    {
       for( y=0 ; y<CUANTOS ; y++ )
         {
              Matriz[x][y] = 0;
        }
    }
    x = CUANTOS / 2;
    y = 0;
    for(contador=1;contador<=limite;contador++)
    {
        Matriz[y][x] = contador;
        vx = x;
        vy = y;
        x++;
        if( x > limitex ) x = 0;
        y--;
        if( y < 0 ) y = limitey;

        if (Matriz[y][x]>0)
        {
            x = vx ;
            y = vy +1 ;
        }
    }
    printf("\nCUADRADO MAGICO\n");
    for( x=0 ; x<CUANTOS ; x++)
    {
         for( y=0 ; y<CUANTOS ; y++ )
         {
              printf("|%3d|",Matriz[x][y]);
         }
         printf("\n");
    }
    printf("\nGRACIAS POR SU VISITA\n");
 system("PAUSE");
  return 0;
}

