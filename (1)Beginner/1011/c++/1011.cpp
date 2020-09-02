#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	double raio, result;
	
	cin >> raio;
	
	result = (4.0/3) * 3.14159 * (raio * raio * raio);
	
	cout << "VOLUME = " << fixed << setprecision(3) << result << endl;
	
	return 0;
}
