#include<bits/stdc++.h>
using namespace std;
struct Node{
	Node *left;
	int data;
	Node *right;
	Node(int x) {
		left = NULL;
		data = x;
		right = NULL;
	}
};

void printTree(Node *root) {
	if(root) {
		printTree(root->left);
		cout<<root->data<<" ";
		printTree(root->right);
	}
}

Node *buildTree(string  str){
	vector<string> arr;
	string tempString;
	stringstream s;
	s<<str;
	while(!s.eof()) {
		s>>tempString;
		arr.push_back(tempString);
	}

	Node *root = new Node(stoi(arr[0]));
	queue<Node*> q;
	q.push(root);
	int i=1;
	while(i<arr.size() && !q.empty()){
		Node *temp = q.front();
		q.pop();

		if(arr[i]!="N") {
			temp->left = new Node(stoi(arr[i]));
			q.push(temp->left);
		}
		i++;

		if(i>=arr.size()) {
			break;
		}

		if(arr[i]!="N") {
			temp->right = new Node(stoi(arr[i]));
			q.push(temp->right);
		}
		i++;

	}
	return root;
}

void LevelWiseDiff(Node *root) {
	queue<Node *> q;
	int level=0,odd=0,even=0;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		Node *temp = q.front();

		if(temp!=NULL) {
			if(level%2==0) {
				even+=temp->data;
			}
			else{
				odd+=temp->data;
			}
		}
		q.pop();

		if(temp==NULL){
			
			if(q.front()) {
				q.push(NULL);
			}
			level++;


		}
		else{
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right) {
				q.push(temp->right);
			}
		}

		
	}
	cout<<odd<<" "<<even<<endl;
} 

int main() {
	string str;
	getline(cin,str);

	Node *root = NULL;
	root = buildTree(str);
	printTree(root);

	LevelWiseDiff(root);
}