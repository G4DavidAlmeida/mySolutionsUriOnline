#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	int cod1, unit1, cod2, unit2;
	double prece1, prece2, total;
	
	cin >> cod1 >> unit1 >> prece1;
	cin >> cod2 >> unit2 >> prece2;
	
	total = (unit1 * prece1)+(unit2 * prece2);
	
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
	
	return 0;
}
