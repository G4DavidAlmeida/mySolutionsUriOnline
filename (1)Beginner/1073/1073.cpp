#include<iostream>
using namespace std;
int main(){
	
	int n=0;
	
	cin >> n;
	
	for(int r=1;r<=n;r++){
		if(r%2 == 0){
			cout << r << "^2 = " << r*r << endl;
		}
	}
	
	
	return 0;
}

