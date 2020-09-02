#include<iostream>
#include<cmath>

using namespace std;

int raio1, eixoX1, eixoY1;
int raio2, eixoX2, eixoY2;

bool isCobre(){

    double distancia = sqrt(pow(eixoX2 - eixoX1, 2) + pow(eixoY2 - eixoY1, 2));

    return raio1 >= (distancia + raio2);
}

int main () {
    while (cin >> raio1 >> eixoX1 >> eixoY1 >> raio2 >> eixoX2 >> eixoY2) {
        cout << (isCobre() ? "RICO" : "MORTO") << endl;
    }
    
    return 0;
}