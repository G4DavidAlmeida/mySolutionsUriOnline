#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class BinaryTree{
    private:
        struct Node{
            int value;
            Node *left;
            Node *right;
        };
        Node *root;
    public:
        void insert (int valor);
        int SearchValue(int valor);
};

void BinaryTree::insert (int valor) {
    if(root == nullptr) {
        root = (Node *) malloc(sizeof(Node));
        root->value = valor;
        root->left = nullptr;
        root->right = nullptr;
    } else {
        Node *temp = root;
        while(true){
            if(valor < temp->value){
                if(temp->left != nullptr){
                    temp = temp->left;
                } else {
                    break;
                }
            } else if (valor > temp->value) {
                if(temp->right != nullptr){
                    temp = temp->right;
                } else {
                    break;
                }
            }
        }
        Node *aux = nullptr;
        aux = (Node *) malloc(sizeof(Node));
        aux->value = valor;
        aux->left = nullptr;
        aux->right = nullptr;
        if (valor < temp->value) {
            temp->left = aux;
        } else if (valor > temp->value) {
            temp->right = aux;
        }
    }
}

int BinaryTree::SearchValue(int valor) {
    if(root == nullptr) return -1;
    
    if(root->value == valor) {
        return root->value;
    }
    
    Node *temp = root;
    while(true){
        if(temp == nullptr) return -1;
        if(temp->value == valor) return temp->value;
        if(valor < temp->value){
            temp = temp->left;
        } else if(valor > temp->value){
            temp = temp->right;
        }
    }
}

int main () {
    
    return 0;
}