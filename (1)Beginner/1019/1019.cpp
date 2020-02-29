#include<iostream>
using namespace std;
int main(){
	
	int t, h, m, s;
	
	cin >> t;
	
	if(t < 60){
		
		h = 0;
		m = 0;
		s = t;
			
	}else if(t < 3600){
		
		h = 0;
		m = t / 60; t = t % 60;
		s = t;
			
	}else{
		
		h = t / 3600; t = t % 3600;
		m =  t / 60; t = t %60;
		s = t;
		
	}
	
	cout << h << ":" << m << ":" << s << endl;
	
	return 0;
}
