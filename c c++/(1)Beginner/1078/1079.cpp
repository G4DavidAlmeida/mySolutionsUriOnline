#include<iostream>
using namespace std;
int main(){
	
	int n=0;
	
	cin >> n;
	
	for(int r=1;r <= 10;r++){
		cout << r << " x " << n << " = " << r * n << endl;
	}
	
	return 0;
}
