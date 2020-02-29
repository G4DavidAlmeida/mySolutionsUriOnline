#include<iostream>
using namespace std;
int main(){
	
	int pass=0;
	
	while(true){
		cin >> pass;
		if(pass == 2002){
			cout << "Acesso Permitido" << endl;
			break;
		}
		cout << "Senha Invalida" << endl;
	}
	
	return 0;
}
