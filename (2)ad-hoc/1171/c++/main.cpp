#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0, x=0;
    cin >> n;

    vector <int> lista1;//lista vetor completo
    vector <int> lista2;//lista vetor sem repetição

    for(int i=0;i<n;i++)
    {
        cin >> x;
        lista1.push_back(x);

        if(lista2.size()==0)lista2.push_back(x);
        for(int j=0;j<lista2.size();j++)
        {
            if(lista1[i]!=lista2[j])
            {
                if(j+1==lista2.size())
                   lista2.push_back(x);
            }
            else break;
        }
    }
    sort(lista1.begin(),lista1.end());
    sort(lista2.begin(),lista2.end());

    for(int i=0;i<lista2.size();i++)
    {
        int cont=0;
        for(int j=0;j<lista1.size();j++)
            if(lista2[i]==lista1[j])
                cont++;

        cout << lista2[i] << " aparece " << cont << " vez(es)" << endl;
    }
    return 0;
}
