#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	int cod, hours;
	float phours, t;
	
	cin >> cod >> hours >> phours;
	
	t = hours * phours;
	
	cout 	<< "NUMBER = "  << cod << endl
			<< "SALARY = U$ " << fixed << setprecision(2) << t << endl;
	
	return 0;
}
