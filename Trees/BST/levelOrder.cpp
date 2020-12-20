#include <iostream>
#include<queue>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
	Node(int x) {
		data = x;
		left = right =NULL;
	}
};

Node *createTree(int x, Node *root) {
	Node *temp = new Node(x);
	Node *temp2 = root;
	if(root == NULL) {
		return temp;
	}
	else {
		if(x < temp2->data) {
			 temp2-> left = createTree(x,temp2 -> left);
		}
		if(x > temp2 -> data) {
			temp2 -> right = createTree(x,temp2 -> right);
		}
		return root;
	}

}

void levelOrder(Node *root) {
	Node *temp = root;
	queue <Node *> q;
	while(temp) {
		cout<<temp->data;
		if(temp->left) {
			q.push(temp->left);
		}
		if(temp->right) {
			q.push(temp->right);
		}
		Node* x = q.front();
		temp = x;
		q.pop();

	}
	
}

void printInorder(Node *root) {
	if(root) {
		printInorder(root->left);
		
		printInorder(root->right);
		cout<<root->data;
	}
}

int main() {
	Node *root = NULL;
	int n;
	for(int i=0; i<7; i++) {
		cin>>n;
		root = createTree(n,root);
	}
	// printInorder(root);

	cout<<"\n";
	levelOrder(root);
}