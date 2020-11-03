#include <bits/stdc++.h>

using namespace std;

int graph[2000][2000];
int n, m;

int gastoMi(int gasto);

int main() {
	
	while(cin >> m >> n && n != 0 && m != 0){
		int x, y, z;
		int gasto = 0;
		for (int i = 0; i < n; i++){
			cin >> x >> y >> z;
			gasto += z;
			graph[x][y] = z;
			graph[y][x] = z;
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < m; j++){
				cout << graph[i][j] << " ";
			}
			cout << endl;
		}
		cout << gasto << endl;
		cout << gastoMi(gasto) << endl;
	}

    return 0;
}

int gastoMi(int gasto){
	int salvaDados[m] = {};

	for (int i = 0; i < m; i++){
		for (int j = 0; j < m; j++){
			if(graph[i][j] != 0){
				if(salvaDados[j] == 0){
                    if(graph[i][j] != salvaDados[i])
					    salvaDados[j] = graph[i][j];
				}
				else if(salvaDados[j] > graph[i][j] ){
					salvaDados[j] = graph[i][j];
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