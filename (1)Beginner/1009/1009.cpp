#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	char name[15];
	double salary, sold, total;
	
	cin >> name >> salary >> sold;
	
	total = salary + (sold * 0.15);
	
	cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;
	
	return 0;
}

