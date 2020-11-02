#include <bits/stdc++.h>

using namespace std;

int graph1[2000][2000];

int n, m;

int gastoMi(int gasto);

int main() {
	
	while(cin >> m >> n && n != 0 && m != 0){
		int x, y, z;
		int gasto = 0;
		for (int i = 0; i < n; i++){
			cin >> x >> y >> z;
			gasto += z;
			graph1[x][y] = z;
			graph1[y][x] = z;
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < m; j++){
				cout << graph1[i][j] << " ";
			}
			cout << endl;
		}
		cout << gasto << endl;
		cout << gastoMi(gasto) << endl;
	}

    return 0;
}

int gastoMi(int gasto){
	int salvaDados[m];
	for(int i=0;i<m;i++){
		salvaDados[i] = 0;
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < m; j++){
			if(graph1[i][j] != 0){
				if(salvaDados[j] == 0){
					salvaDados[j] = graph1[i][j];
				}
				else if(salvaDados[j] > graph1[i][j] ){
					salvaDados[j] = graph1[i][j];
				}
				else if(salvaDados[i] > graph1[i][j]){
					salvaDados[i] = graph1[i][j];
				}
			}
		}
	}
	for (int i=0;i<m;i++){
		cout << salvaDados[i] << " ";
		gasto -= salvaDados[i];
	}
	return gasto;
}