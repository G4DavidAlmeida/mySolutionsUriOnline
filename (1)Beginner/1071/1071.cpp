#include<iostream>
using namespace std;
int main(){
	
	int x=0, y=0, soma=0;
	
	cin >> x >> y;
	
	if(x < y){
		x = x + 1;
		for(;x<y;x++){
			if(x%2 != 0){
				soma = soma + x;
			}
		}
	}else{
		y = y + 1;
		for(;y<x;y++){
			if(y%2 != 0){
				soma = soma + y;
			}
		}	
	}
	
	cout << soma << endl;
	
	return 0;
}
