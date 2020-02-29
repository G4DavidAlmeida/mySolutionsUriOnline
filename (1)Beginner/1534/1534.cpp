#include<iostream>
using namespace std;
int main(){
	
	int n=0, lin, col;
	
	while(cin >> n){
		int m[n][n];
		
		for(lin=0;lin<n;lin++){
			for(col=0;col<n;col++){
				if(lin+col==n-1){m[lin][col] = 2;}
				else if(lin==col){m[lin][col] = 1;}
				else{m[lin][col] = 3;}
			}
		}
		for(lin=0;lin<n;lin++){
			for(col=0;col<n;col++){
				cout << m[lin][col];
			}
			cout << endl;
		}
	}
	return 0;
}
