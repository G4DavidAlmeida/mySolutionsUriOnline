#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int tmax(int n, int pMax, int time[], int qp[]);

int main()
{
	int n=0, pMax=0;

	while(cin >> n >> pMax)
	{
		if(n == 0)break;
		int time[n], qp[n];

		for(int i=0; i < n; i++) {
			cin >> time[i] >> qp[i];
		}
        cout << tmax(n, pMax, time, qp) << " min." << endl;
	}
	return 0;
}
int tmax(int n, int pMax, int time[], int qp[]) {
	int i, j, temp1, temp2;
	for (i = 0; i < n; i++)
		for (j=i+1; j<n; j++) {
			if (qp[i] > qp[j]) {
                temp1 = qp[i]; temp2 = time[i];
				qp[i] = qp[j]; time[i] = time[j];
				qp[j] = temp1; time[j] = temp2;
			}
			if(qp[i]==qp[j])
            {
                if(time[i]>time[j])
                {
                temp1=qp[i];temp2=time[i];
				qp[i]=qp[j];time[i]=time[j];
				qp[j]=temp1;time[j]=temp2;
                }
            }
		}

	int matriz[n+1][pMax+1];

	for(i=0;i<n+1;i++)matriz[i][0]=0;
	for(j=0;j<pMax+1;j++)matriz[0][j]=0;

	for(i=1;i<n+1;i++)
		for(j=1;j<pMax+1;j++)
		{
            if(j>=qp[i-1])
            {
                matriz[i][j]=max(time[i-1]+matriz[i-1][j-qp[i-1]],matriz[i-1][j]);
            }
            else matriz[i][j] = matriz[i-1][j];
		}
	return matriz[n][pMax];
}
