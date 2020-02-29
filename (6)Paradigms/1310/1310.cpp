#include<iostream>
using namespace std;
int main(){
	int n=0, cost=0;
	while(cin >> n){if(n==EOF || n == 0)break;
		int maxi=0;
		cin >> cost;
		int days[n];
		cin >> days[0];days[0] -= cost;
		if(days[0]>maxi)maxi=days[0];
		for(int i=1;i<n;i++){
			cin >> days[i];
			days[i] -= cost;
			if(days[i] + days[i-1] > days[i])days[i] = days[i] + days[i-1];
			if(days[i]>maxi)maxi = days[i];
		}
		cout << maxi << endl;
	}
	return 0;
}
