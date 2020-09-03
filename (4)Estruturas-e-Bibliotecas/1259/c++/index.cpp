#include<iostream>
#include<bits/stdc++.h>

using namespace std;

priority_queue<int> odd;
priority_queue<int> even;


void mostrarValores () {
    while (!even.empty()) {
        cout << -even.top() << endl;
        even.pop();
    }
    while (!odd.empty()) {
        cout << odd.top() << endl;
        odd.pop();
    }
}

int main () {
    int n, value;
    cin >> n;
    while (n--) {
        cin >> value;
        if (value % 2 == 0)
            even.push(-value);
        else
            odd.push(value);
    }
    mostrarValores();
    return 0;
}