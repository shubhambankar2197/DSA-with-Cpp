#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

Node *createList(int l,Node *head) {
	Node *temp = new Node(l);
	Node *temp2 = head;
	if(head==NULL) {
		head = temp;
		return head;
	}
	while(temp2->next) {
		temp2 = temp2->next;
	}
	temp2 -> next = temp;
	return head;
}

void printlist(Node *head) {
	Node *temp = head;
	if(temp) {
			cout<<temp->data<<" ";
			printlist(temp->next);
		}

}


Node *reverse(Node *temp) {
	Node *p = NULL;
	Node *c = temp;
	Node *n = NULL;
	while(c) {
		n=c->next;
		c->next = p;
		p = c;
		c=n;
	}
	return p;
}

bool isPalin(Node *head) {
	// Node *temp2 = head;
	Node *temp = head;
	// Node *rev = NULL;
	// rev = reverse(temp);
	// printlist(head);
	// cout<<"\n";
	// printlist(rev);
	int arr[100],i=0;
	while(temp) {
		arr[i] = temp -> data;
		i++;
		temp = temp->next;
	}
	// for(int k=0; k<i; k++) {
	// 	cout<<arr[k];
	// }
	int j=0,flag=1;

	while(j<i) {
		if(arr[j]==arr[i-1]){
			j++;
			i--;
		}
		else{
			flag=0;
			break;
		}
		
	}

	if(flag==1) {
		return true;
	}	
	else
		return false;
}

int main() {
	Node *head = NULL;
	int l;
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>l;
		head=createList(l,head);
	}

	// printlist(head);
	// isPalin(head);
	bool Plain = isPalin(head);
		cout<<Plain;
}