#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
	Node(int x) {
		data = x;
		left = NULL;
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
			temp2 = temp2 -> left;
		}
		else if(x > temp2->data){
				if(temp2->right==NULL) {
				temp2->right = temp;
				}
			temp2 = temp2 -> right;
		}
		else
			break;
			
		
	}
	return root;
}


void printtree(Node *root) {
	if(root) {
		printtree(root->left);
		cout<<root->data;
		printtree(root->right);
	}
}

int main(){
	Node *root = NULL;
	int n;
	for(int i=0; i<3; i++) {
		cin>>n;
		root = createTree(n,root);
	}
	printtree(root);
	// cout<<root->left->data;
	return 0;
}