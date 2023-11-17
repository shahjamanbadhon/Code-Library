#include <bits/stdc++.h>
using namespace std;


// A Binary Tree Node
struct Node {
	string data;
	struct Node *left, *right;
};


//Function for Breadth First Search
void bfs(Node* root)
{
	// Base Case
	if (root == NULL)
		return;

	// Create an empty queue for level order traversal
	queue<Node*> q;

	// Enqueue Root and initialize height
	q.push(root);

	while (q.empty() == false) {

		// Print front of queue and remove it from queue
		Node* node = q.front();
		cout << node->data << " ";
		q.pop();

		// Enqueue left child
		if (node->left != NULL)
			q.push(node->left);

		// Enqueue right child
		if (node->right != NULL)
			q.push(node->right);
	}
}


//Function for Breadth First Search
void dfs(Node* root)
{
	// Base Case
	if (root == NULL)
		return;

    // Print the data of the current node
    cout << root->data << " ";

    // Recursively traverse the left and right subtrees
    dfs(root->left);
    dfs(root->right);
}


// Utility function to create a new tree node
Node* newNode(string data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}


int main()
{
	//binary tree
	Node* root = newNode("p");
	root->left = newNode("q");
	root->right = newNode("r");
	root->left->left = newNode("x");
	root->left->right = newNode("y");

	cout << "BFS traversal of binary tree is: ";
	bfs(root);

	cout<<endl;

	cout << "DFS traversal of binary tree is: ";
	dfs(root);

	return 0;
}

