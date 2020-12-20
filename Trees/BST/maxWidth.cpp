#include <iostream>
#include<queue>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
	Node(int x) {
		data = x;
		left = right = NULL;
	}
};

Node *createTree(int i, Node *root) {
	Node *temp2 = root;
	Node *temp = new Node(i);
	if(root==NULL) {
		root = temp;
		return root;
	}
	else {
		while(temp2) {
			if((temp2->data)){
				if(temp2->left==NULL) {
					temp2->left = temp;
				}
				temp2 = temp2 -> left;
			}
			
			else if((temp2->data)){
				if(temp2->right==NULL) {
					temp2->right = temp;
				}
				temp2 = temp2 -> right;
			}

			// else if((i==temp2->data)) {
			// 	if(temp2->left==NULL) {
			// 		temp2->left = temp;
			// 	}
			// 	temp2 = temp2 -> left;
			// }

			else
				break;
		}
	}
	return root;
}

// Node *maxWidth(Node *root) {
// 	Node *temp = root;
// 	int max = 0,index=1;
// 	queue <Node *> q;
// 	if(root==NULL)
// 		return NULL;
// 	else {
// 		while(temp) {
// 			cout<<temp->data;
// 			if(temp->left) {
// 				q.push(temp->left);

// 			}
// 			if(temp->right) {
// 				q.push(temp->right);
// 			}
// 			Node *x = q.front();
// 			temp = x;
// 			q.pop();
// 		}
// 		return root;
// 	}
// }


void printTree(Node *root) {
	// Node *temp = root;
	if(root) {
		printTree(root->left);
		cout<<root->data<<" ";
		printTree(root->right);
		
	}
}



int add(Node *root) {
	Node *temp = root;
	queue <Node *> q;
	q.push(temp);
	int level=0,sum=0;
	while(!q.empty()) {
		int size = q.size();
		level = level + 1;
		while(size>0) {
			Node *x = q.front();
			q.pop();
			// if(level%2==1) {
			// 	sum = sum + x->data;
			// }

			if(x->left) {
				
				q.push(x->left);
			}

			if(x->right) {
				
				q.push(x->right);
			}

			if((!x->left) && !(x->right)) {
				sum = sum + 1;
			}
			size -= 1;
		}

	}
	return sum;
}

int main() {
	Node *root = NULL;
	Node *width = NULL;
	int sum, index = 1;
	int n;
	for(int i=0; i<7; i++) {
		cin>>n;
		root = createTree(n,root);
	}
	// printTree(root);
	// cout<<"\n";
	// width = maxWidth(root);
	// printTree(width);
	// cout<<width;
	sum = add(root);
	cout<<sum;
	
	}
