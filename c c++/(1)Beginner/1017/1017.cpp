#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	int hou, spe;
	double dis, con;
	
	cin >> hou >> spe;
	
	dis = hou * spe;
	con = dis / 12;
	
	cout << fixed << setprecision(3) << con << endl;
	
	return 0;
}
