#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	double m[12][12], val=0;
	int col, lin, x=0;
	char y;
	
	cin >> x;
	cin >> y;
	for(lin=0;lin<12;lin++){
		for(col=0;col<12;col++){
			cin >> m[lin][col];
		}
	}
	for(col=0;col<12;col++){
		val = val + m[x][col];
	}
	if(y == 'M'){
		val =  val / 12;
	}
	cout << fixed << setprecision(1) << val << endl;
	return 0;
}

