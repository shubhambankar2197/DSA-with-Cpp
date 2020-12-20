#include<bits/stdc++.h>
using namespace std;
struct Node {
	Node *left;
	int data;
	Node *right;
	Node(int x) {
		left = NULL;
		data = x;
		right = NULL;
	}
};

Node *createTree(int x, Node *root) {

	Node *temp = new Node(x);
	Node *temp2 = root;
	if(root==NULL) {
		root = temp;
		return root;
	}
	while(temp2) {
		if(x < temp2->data) {
			if(temp2->left==NULL) {
				temp2->left = temp;
			}
			temp2= temp2->left;
		}

		else if (x>temp2->data) {
			if(temp2->right==NULL) {
				temp2->right = temp;
			}
			temp2 = temp2->right;
		}
		else{
			break;
		}
	}
	return root;
}

void printTree(Node *root) {
	if(root) {
		printTree(root->left);
		cout<<root->data<<" ";
		printTree(root->right);
	}
}

int main() {
	Node *root = NULL;
	int x,n;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>x;
		root = createTree(x,root);
	}

	printTree(root);
	

}