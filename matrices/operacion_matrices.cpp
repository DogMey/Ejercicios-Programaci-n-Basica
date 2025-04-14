#include<iostream>
using namespace std;

void suma (int A, int B, int N){
	int C[N][N];
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			C[i][j] = A[i][j]+B[i][j];
			cout<<C[i][j]<<endl;
		}
	}
}

void resta (int A, int B, int N){
	int D[N][N];
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			D[i][j] = A[i][j]-B[i][j];
			cout<<D[i][j]<<endl;
		}
	}
}

int multiplicacion (int A, int B, int N){
	int E[N][N];
	cout<<"MULTIPLICACION"<<endl;
	for(int i= 0; i<N; i++){
		for(int j = 0; j<N; j++){
			E[i][j]=0;
			for(int k = 0; k<N; k++){
				E[i][j] = E[i][j] + A[i][k] * B[k][j];	
			}
		}
	}
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			cout<<E[i][j]<<endl;
		}
	}
}

int inversa (int A[N][N], int B[N][N]){
		int C[N][N];
	cout<<"INVERSA"<<endl;
}

int main (){
	int N;
	cout<<"Digite la dimension de su matriz"<<endl;
	cin>> N;
	int A[N][N], B[N][N];
	for(int i = 0; i<N; i++){
		for(int j = 0;j<N; j++){
			cout<<"A["<<i<<"]["<<j<<"]:";
			cin>>A[i][j];
		}
	}
	for(int i = 0; i<N; i++){
		for(int j = 0;j<N; j++){
			cout<<"B["<<i<<"]["<<j<<"]:";
			cin>>B[i][j];
		}
	}
	suma(A, B);
	resta(A, B);
	multiplicacion(A,B);
	return 0;
}
