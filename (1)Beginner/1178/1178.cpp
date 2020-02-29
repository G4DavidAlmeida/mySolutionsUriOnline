#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	double x=0, n[100];
	int i;
	
	cin >> x;
	n[0] = x;
	cout << "N[0] = " << fixed << setprecision(4) << n[0] << endl;
	for(i=1;i<100;i++){
		n[i] = n[i-1] / 2;
		cout << "N[" << i << "] = " << fixed << setprecision(4) << n[i] << endl;
	}
	
	return 0;
}
