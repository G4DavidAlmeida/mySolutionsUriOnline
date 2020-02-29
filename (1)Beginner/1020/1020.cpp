#include<iostream>
using namespace std;
int main(){
	
	int x;
	
	cin >> x;
	
	cout << x / 365 << " ano(s)" << endl; x = x % 365;
	cout << x / 30 << " mes(es)" << endl; x = x % 30;
	cout << x << " dia(s)" << endl;
	
	
	return 0;
}
