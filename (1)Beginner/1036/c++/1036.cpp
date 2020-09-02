#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	
	float a=0, b=0, c=0, delta=0, x1=0, x2=0;
	
	cin >> a >> b >> c;
	
	if(a==0){
		cout << "Impossivel calcular" << endl;
	}else{
		
		delta = pow(b,2)-4*a*c;
		
		if(delta < 0){
			
			cout << "Impossivel calcular" << endl;
			
		}else{
			x1 = (-(b)+sqrt(delta))/(2*a);
			
			x2 = (-(b)-sqrt(delta))/(2*a);
				
			cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
				
			cout << "R2 = " << fixed << setprecision(5) << x2 << endl;
		}
	}
	
	return 0;
}
