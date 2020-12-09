#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fmin(int n,int compt,int opts[]);
int main()
{
    int test, n, compt;
    cin >> test;
    for(int i = 0; i < test; i++) {
        cin >> n;
        cin >> compt;
        int opts[n];
        for(int i = 0; i < n; i++)cin >> opts[i];
        cout << fmin(n, compt, opts) << endl;
    }
    return 0;
}
int fmin(int n, int compt, int opts[]) {
    long long matriz[n+1][compt+1];
    long int i, j;

    for(i = 0; i <= compt; i++) matriz[0][i] = INT_MAX;
    for(i = 0; i <= n; i++) matriz[i][0] = 0;

    for(i = 1; i <=n; i++)
        for(j = 1; j <= compt; j++)
        {
            if(j>=opts[i-1]) {
                matriz[i][j] = min(matriz[i][j-opts[i-1]]+1, matriz[i-1][j]);
            }
            else matriz[i][j] = matriz[i-1][j];
        }
    return matriz[n][compt];
}
