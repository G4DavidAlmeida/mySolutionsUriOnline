#include<iostream>
using namespace std;
int main(){
	
	int a=0, b=0, c=0, d=0, cd=0, ab=0, ap=0;
	
	cin >> a >> b >> c >> d;
	
	cd=c+d; ab=a+b; ap=a%2;
	
	if(b > c && d > a && cd > ab && c >=0 && d >= 0 && ap == 0){
		cout << "Valores aceitos" << endl;
	}else{
		cout << "Valores nao aceitos" << endl;
	}
	
	
	
	return 0;
}
