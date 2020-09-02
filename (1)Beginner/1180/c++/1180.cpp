#include<iostream>
using namespace std;
int main(){
	
	int i, n=0;
	
	cin >> n;
	
	int x[n], y[2];
	cin >> x[0];
	y[0] = x[0];
	for(i=1;i<n;i++){
		cin >> x[i];
		if(x[i] < y[0]){
			y[0] = x[i];
			y[1] = i;
		}
	}
	cout << "Menor valor: " << y[0] << endl;
	cout << "Posicao: " << y[1] << endl;
	
	
	return 0;
}
