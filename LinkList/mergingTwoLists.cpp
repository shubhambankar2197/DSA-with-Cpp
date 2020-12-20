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

Node *createList(int x, Node *head) {
	Node *temp = new Node(x);
	Node *temp2 = head;

	if(head==NULL) {
		head = temp;
		return head;
	}

	else{
		while(temp2->next!=NULL) {
			temp2 = temp2->next;
		}
		temp2->next = temp;
		// temp->next = head;
		// head = temp;
		return head;
	}
}

void printList(Node *head) {
	Node *temp = head;
	while(temp!=NULL) {
		cout<<temp->data<<"  ";
		temp = temp->next;
	}
	cout<<"\n";
}

void mergeList(Node *head, Node *head2) {
	Node *temp1 = head;
	Node *temp2 = head2;
	Node *merge = NULL;
	while(temp1 && temp2) {
		if(temp1->data < temp2->data) {
			merge = createList(temp1->data,merge);
			temp1 = temp1->next;
		}
		else{
			merge = createList(temp2->data,merge);
			temp2 = temp2->next;
		}
	}
	while(temp1) {
		merge = createList(temp1->data,merge);
		temp1 = temp1->next;
	}

	while(temp2) {
		merge = createList(temp2->data,merge);
		temp2 = temp2->next;
	}
	printList(merge);

}

int  main() {
	int n,m,x;
	cin>>n>>m;
	Node *head = NULL;
	Node *head2 = NULL;
	for(int i=0; i<n; i++) {
		cin>>x;
		head = createList(x,head);
	}

	for(int i=0; i<m; i++) {
		cin>>x;
		head2 = createList(x,head2);
	}
	printList(head);
	printList(head2);
	mergeList(head,head2);
}