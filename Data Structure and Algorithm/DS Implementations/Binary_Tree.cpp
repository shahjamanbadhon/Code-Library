#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
};

Node *create_node(int item){
    Node *new_node = (Node*) malloc(sizeof(Node));
    if (new_node == NULL){
        cout << "Error ! Could not create a new node.\n";
        exit(1);
    } else{
        new_node-> data = item;
        new_node-> left = NULL;
        new_node-> right = NULL;
    }

    return new_node;
}

void add_left_child(Node *node, Node *child){
    node->left = child;
}

void add_right_child(Node *node, Node *child){
    node->right = child;
}

Node *create_tree(){
    Node *two = create_node(2);
    Node *seven = create_node(7);
    Node *nine = create_node(9);
    add_left_child(two,seven);
    add_right_child(two,nine);

    Node *one = create_node(1);
    Node *six = create_node(6);
    add_left_child(seven,one);
    add_right_child(seven,six);

    return two;
}

int32_t main(){
    Node *root = create_tree();
    cout << root->data;
}
