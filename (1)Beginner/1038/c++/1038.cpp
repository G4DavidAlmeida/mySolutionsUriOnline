#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	int x = 0, y = 0;
	double t = 0;
	
	cin >> x >> y;
	
		if(x >= 1 && x <= 5){
			
			if(x == 1){	
				t = y * 4;
			}
			else if(x == 2){
				t = y * 4.5;
			}
			else if(x == 3){
				t = y * 5;	
			}
			else if(x == 4){
				t = y * 2;
			}
			else{
				t = y * 1.5;
			}
			
			cout << "Total: R$ " << fixed << setprecision(2) << t << endl;
				
		}else{
			cout << "Pedido invalido" << endl;	
		}
	
	return 0;
}
