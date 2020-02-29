#include<iostream>
using namespace std;
int main(){
	
	int i, t=0, n[1000];
	
	cin >> t;
	n[0] = 0;
	cout << "N[0] = " << n[0] << endl;
	for(i=1;i<1000;i++){
		n[i] = n[i-1] + 1;
		if(n[i] >= t){
			n[i] = 0;
		}
		cout << "N[" << i << "] = " << n[i] << endl;
	}
	return 0;
}
