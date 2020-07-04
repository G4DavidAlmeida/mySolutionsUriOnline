#include<iostream>
using namespace std;
int fibPD(int n);
int memo[50][2], i, call, counter;
int main(){
	for(i=2;i<50;i++)memo[i][0]=-1;
	int vez;
	cin >> vez;
	int nvez[vez];
	for(i=0;i<vez;i++){
		cin >> nvez[i];
	}
	for(i=0;i<vez;i++){
		if(memo[nvez[i]][0]==-1){
			call = 0;counter = 0;
			fibPD(nvez[i]);
			memo[nvez[i]][0] = call -1;
			memo[nvez[i]][1] = counter;
		}
		cout << "fib(" << nvez[i] << ") = " << memo[nvez[i]][0] << " calls = " << memo[nvez[i]][1] << endl;
	}
	return 0;
}
int fibPD(int n){
   if(n == 0){
   	call++;
   	return 0;
   }
   if(n==1){
   	call++;counter++;
   	return 1;
   }
   call++;
   return fibPD(n-1) + fibPD(n-2);
}


