#include<iostream>
using namespace std;
float vf1(float c, float i, float n, float x, float ti) {
	float n;
	float vf;
	while (x<n) {
		i = c*ti;
		vf = c+i;
		x = x+1;
	}
	return vf;
}

int main() {
	float c, i, in, n, ti, vf, x;
	cout << "Capital" << endl;
	cin >> c;
	cout << "Años" << endl;
	cin >> n;
	cout << "Tasa de interes" << endl;
	cin >> ti;
	x = 0;
	ti = ti/100;
	cout << vf1(c,i,in,x,ti) << endl;
	return 0;
}
