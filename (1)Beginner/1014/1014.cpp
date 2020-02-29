#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	int x;
	double y , result;
	
	cin >> x >> y;
	
	cout << fixed << setprecision(3) << x / y << " km/l" << endl;
	
	return 0;
}
