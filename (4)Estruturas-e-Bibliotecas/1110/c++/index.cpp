#include<iostream>
#include<bits/stdc++.h>
using namespace std;

list<int> cards;
priority_queue<int> even;
priority_queue<int> odd;

int main () {
    int n = 1;
    while (true) {
        cin >> n;
        if (n == 0) break;
        for (int i = 0; i < n; i++)
            cards.push_back(i + 1);
        
        while (cards.size() != 1) {
            if (cards.front() % 2 == 0)
                even.push(-cards.front());
            else
                odd.push(-cards.front());

            cards.pop_front();
            cards.push_back(cards.front());
            cards.pop_front();
        }
        cout << "Discarded cards: ";
        while (odd.size() != 0) {
            cout << -odd.top() << ", ";
            odd.pop();
        }
        while (even.size() != 0) {
            cout << -even.top();
            even.pop();
            if (even.size() == 0) cout << endl;
            else cout << ", ";
        }
        cout << "Remaining card: " << cards.front() << endl;
        cards.pop_back();
    }
    
    return 0;
}