#include <iostream>
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


int Count(Node *root) {
	Node *temp = root;
 	if(temp==NULL) {
		return 0;
	}
	else {

		// if(temp) {
			
		// 	Count(temp->left);
		// 	count++;
		// 	// cout<<"\n"<<temp->data;
		// 	Count(temp->right);
			
		// }
		return (1+Count(temp->left)+Count(temp->right));
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
	int n,cou;
	for(int i=0; i<7; i++) {
		cin>>n;
		root = createTree(n,root);
	}
	printInorder(root);
		cou= Count(root);

	cout<<"\n"<<cou;
}