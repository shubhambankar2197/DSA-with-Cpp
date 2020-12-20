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

Node *createTree(Node *root, int x) {
	Node *temp = new Node(x);
	if(root == NULL) {
		root = temp;
		return root;
	}
	Node *temp2 = root;
	while(temp2) {
		if(x < temp2->data) {
			if(temp2->left==NULL) {
				temp2->left = temp;
			}
			temp2 = temp2->left;
		}

		else if(x > temp2->data) {
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

void print(Node *temp) {
	if(temp) {
		cout<<temp->data<<"\n";
		print(temp->left);
		print(temp->right);
	}
}

void findingSubTree(Node *root, int y) {
	Node *temp = root;
	while(temp) {

		if(y == temp->data) {
			print(temp);
			break;
		}

		if(y > temp->data) {
			temp = temp->right;
		}

		if(y < temp->data) {
			temp = temp->left;
		}
	}
}


int main() {
	int n,x,y;
	cin>>n;
	Node *root = NULL;
	for(int i=0; i<n; i++) {
		cin>>x;
		root = createTree(root,x);
	}
	cin>>y;
	//Node *temp = NULL;
	findingSubTree(root,y);


}
