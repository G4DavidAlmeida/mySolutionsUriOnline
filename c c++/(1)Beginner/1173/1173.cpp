#include<iostream>
using namespace std;
int main(){
	
	int n[10], i;
	
	cin >> n[0];
	cout << "N[0] = " << n[0] << endl;
	for(i=1;i<10;i++){
		n[i] = n[i-1] + n[i-1];
		cout << "N[" << i << "] = " << n[i] << endl;
	}
	
	return 0;
}
