#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	float a, b, c, t;
	
	cin >> a >> b >> c;
	
	t = ((a*2)+(b * 3)+(c * 5))/(2+3+5);
	
	cout << "MEDIA = " << fixed << setprecision(1) << t << endl;
	
	
	return 0;
}
