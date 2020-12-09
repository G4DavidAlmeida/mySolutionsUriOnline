#include<iostream>

using namespace std;

int particiona(int value[], int left, int right){
	int pivot = value[left];
	int i = left;
	
	for(int j = left + 1; j <= right; j++){
		if(value[j] >= pivot){
			i++;
			int aux = value[i];
			value[i] = value[j];
			value[j] = aux;
		}
	}
    
	int aux = value[left];
	value[left] = value[i];
	value[i] = aux;
	
	return i;
}

void quickSort(int value[], int left, int right){
	if(left < right){
		int index_pivot = particiona(value, left, right);
		quickSort(value, left, index_pivot - 1);
		quickSort(value, index_pivot + 1, right);
	}
}

char troco(int moedas[], int v, int m){
    if(moedas[0] == v) return 'S';
    for(int i = 1; i < m; i++){
        if(moedas[i] == v) return 'S';
        if(moedas[i] <= v){
            if((moedas[i] + moedas[i - 1]) <= v) moedas[i] += moedas[i - 1];
        }
    }
    if(moedas[m-1] == v) return 'S';
    return 'N';
}

void show(int moedas[], int m){
    for(int i = 0; i < m; i++){
        cout << moedas[i] << " ";
    }
}

int main () {
    int v, m;
    cin >> v >> m;
    
    int mi[m] = {};

    for (int i = 0; i < m; i++) {
        cin >> mi[i];
    }
    quickSort(mi, 0, m);
    show(mi, m);
    cout << troco(mi, v, m) << endl;
    
    return 0;
}