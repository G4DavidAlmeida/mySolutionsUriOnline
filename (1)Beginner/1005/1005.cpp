#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	float a, b , t;
	
	cin >> a >> b;
	
	
	t = ((a * 3.5)+(b * 7.5))/(3.5 + 7.5);
	
	cout << "MEDIA = " << fixed << setprecision(5) << t << endl;
	
	return 0;
}
