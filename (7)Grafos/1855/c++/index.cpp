#include<iostream>

using namespace std;

char mapa[101][101] = {};

char diamondFinded (int col, int row) {
    if(col == 0 && row == 0){
        return '!';
    } else {
        int coluna = 0, linha = 0;
        char sentido = 'o';

        while (true) {
            if(mapa[linha][coluna] == '*') return '*';
            if(mapa[linha][coluna] == 'o') return '!';
            
            if(mapa[linha][coluna] == '>') {
                mapa[linha][coluna] = 'o';
                sentido = '>';

                if (coluna < col) coluna++;
                else return '!';
            }
            
            else if(mapa[linha][coluna] == 'v') {
                mapa[linha][coluna] = 'o';
                sentido = 'v';

                if (linha < row) linha++;
                else return '!';
            }
            
            else if(mapa[linha][coluna] == '<') {
                mapa[linha][coluna] = 'o';
                sentido = '<';

                if (coluna > 0) coluna--;
                else return '!';
            }
            
            else if(mapa[linha][coluna] == '^') {
                mapa[linha][coluna] = 'o';
                sentido = '^';

                if (linha > 0) linha--;
                else return '!';
            }
            if (mapa[linha][coluna] == '.') {
                mapa[linha][coluna] = sentido;
            }
            
        }
    }
}

/*void showMap (int col, int row) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++){
            cout << mapa[i][j];
        }
        cout << endl;
    }
}*/

int main() {
    int n, m; // n colunas | m linhas
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        cin >> mapa[i];
    }

    cout << diamondFinded(n, m) << endl;

    //cout << endl;

    //showMap(n, m);

    return 0;
}
