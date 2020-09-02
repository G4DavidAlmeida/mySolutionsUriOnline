#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	float r = 0, a = 0;
	
	cin >>  r;
	
	a = 3.14159 * (r * r);
	
	cout << "A=" << fixed << setprecision(4) << a << endl;
	
	return 0;
}

/*

	OU SE QUISER USAR ESSE CODIGO, TAMBEM FUNCIONA

#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	
	float r, a; // ou double, tanto faz
	
	cin >> r;
	
	printf("A=%.4f\n",3.14159 * r * r);
	
	return 0;
}

*/
