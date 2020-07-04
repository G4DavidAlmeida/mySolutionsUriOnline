#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	double x[100];
	int i;
	
	for(i=0;i<100;i++)cin >> x[i];
	
	for(i=0;i<100;i++){
		if(x[i]<=10){
			cout << "A[" << i << "] = " << fixed << setprecision(1) << x[i] << endl;	
		}
	}
	
	return 0;
}
