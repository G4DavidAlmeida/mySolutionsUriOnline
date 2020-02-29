#include<iostream>
using namespace std;
int main(){
	
	int i, x=0, par[5], ipar=-1, imp[5], iimp=-1;
	
	for(i=0;i<15;i++){
		cin >> x;
		if(x%2==0){
			ipar++;
			par[ipar] = x;
		}else{
			iimp++;
			imp[iimp] = x;
		}
		if(ipar == 4){
			for(ipar=0;ipar<5;ipar++){
				cout << "par[" << ipar << "] = " << par[ipar] << endl;
			}
				ipar = -1;
		}else if(iimp == 4){
			for(iimp=0;iimp<5;iimp++){
				cout << "impar[" << iimp << "] = " << imp[iimp] << endl;
			}
				iimp = -1;
		}
	}
	if(iimp >= 0){
		for(i=0;i<=iimp;i++){
			cout << "impar[" << i << "] = " << imp[i] << endl;
		}
	}
	if(ipar >= 0){
		for(i=0;i<=ipar;i++){
			cout << "par[" << i << "] = " << par[i] << endl;
		}
	}
	return 0;
}
