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


void printTree(Node *root) {
	if(root) {
		printTree(root->left);
		cout<<root->data<<" ";
		printTree(root->right);
	}
}

//     1 2 3 N N 4 6 N 5 N N 7 N
void printKDistance(Node* root, int klevel) 
{ 
    queue<Node*> q; 
    int level = 0; 
    bool flag = false; 
    q.push(root); 

    q.push(NULL); 
    while (!q.empty()) { 
        Node* temp = q.front(); 
  		
        // print when level is equal to k 
        if (level == klevel && temp != NULL) { 
            flag = true; 
            cout << temp->data << " "; 
        } 
        q.pop(); 
        if (temp == NULL) { 
            if (q.front()) {
                q.push(NULL); 
            }
            level += 1; 
  
            // break the loop if level exceeds 
            // the given level number 
            if (level > klevel) 
                break; 

        } 

        else { 
            if (temp->left) 
                q.push(temp->left); 
  
            if (temp->right) 
                q.push(temp->right); 
        } 
    } 
    cout << endl; 
  
    //return flag; 
} 

int main() {
	string str;
	getline(cin,str);

	Node *root = NULL;
	root = buildTree(str);
	printTree(root);
	cout<<endl;
	int k;
	cin>>k;
	printKDistance(root,k);
}