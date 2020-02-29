#include<iostream>
using namespace std;
int main(){
	
	int n[20], o=0, i;
	
	for(i=0;i<20;i++)cin >> n[i];
	
	for(i=19;i>=0;i--){
		cout << "N[" << o << "] = " << n[i] << endl;
		o++;
	}
	return 0;
}
