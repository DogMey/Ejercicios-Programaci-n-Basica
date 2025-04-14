#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define N 10
using namespace std;
void mayor (int A[N])
{
	int j=0;
	int i=0;
	int aux = 0;
	for (i=0; i<N-1; i++)
	{
	   for (j=i+1; j<N; j++)
	  {
	    if(A[i] < A[j])
	    {
	     aux = A[i];
	     A[i] = A[j];
	     A[j] = aux;
	    }
	  }
	}
	for(i=0;i<N;i++)
	{
		cout<<A[i]<<" ";
	}
}

void menor (int A[N])
{
	int j=0;
	int i=0;
	int aux = 0;
	for (i=0; i<N-1; i++)
	{
	   for (j=i+1; j<N; j++)
	  {
	    if(A[i] > A[j])
	    {
	     aux = A[i];
	     A[i] = A[j];
	     A[j] = aux;
	    }
	  }
	}
	for(i=0;i<N;i++)
	{
		cout<<A[i]<<" ";
	}
}


int main()
{
	int i;
	i=0;
	int A[N];
	while(i<N)
	{
	cout<<"Porfavor, digite un número entero, hasta completar 10, va en el: "<<i+1<<""<<endl;
	cin>>A[i];
	i++;
	}
	for(i=0;i<N;i++)
	{
	cout<<A[i]<<" ";
	}
	cout<<" "<<endl;
	menor(A);
	cout<<" "<<endl;
	mayor(A);
	return 0;
}		
