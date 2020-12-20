#include<iostream>
using namespace std;
struct Node {
	int data;
	Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

//Adding list at the beginning at of the list

// Node *createNode(int x, Node *head) {
// 	Node *temp = new Node(x);
// 	temp -> next = head;
// 	head = temp;
// 	return head;
// }

//Adding list at the end of the list
Node *createNode(int x, Node *head) {
	Node *temp = new Node(x);
	Node *temp2 = head;
	if(head==NULL)
	{
		head = temp;
		return head;
	}
	while(temp2->next) {
		temp2 = temp2 -> next;
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

Node *reverse(Node *head) {
	Node *prev = NULL;
	Node *current = head;
	Node *nextN = head->next;
	while(current) {
		nextN = current -> next;
		current -> next = prev;
		prev = current;
		current = nextN;
	}
	// printlist(prev);
	return prev;
}

Node *mid(Node *reverse) {
	Node *p = reverse;
	Node *q = reverse;
	while(q->next!=NULL && q->next->next!=NULL) {
		p=p->next;
		q=q->next->next;
	}
	return p;
}


Node *op(int n, int m, Node *revr) {
	Node *temp = revr;
	Node *temp2 = revr;
	Node *temp3 = revr;
	Node *temp4 = revr;
	int count=0;
	while(temp) {
		count++;
		temp=temp->next;
	}
	n = count - n;
	while(n-1) {
		temp2 = temp2->next;
		n--;
	}
	while(m-1) {
		temp3 = temp3->next;
		m--;
	}
	temp3 -> next = temp2 -> next;
	while(temp3->next!=NULL) {
		temp3 = temp3 -> next;
	}
	// cout<<temp3->next->next->next;
	temp3 -> next = temp2;
	temp2->next=NULL;
	return temp4;
}


int main() {
	Node *head = NULL;
	Node *rev = NULL;
	Node *Mid = NULL;
	Node *Op = NULL;
	for(int i=10; i<60; i=i+10) {
		head = createNode(i,head);
	}
	cout<<"Link list is ";
	printlist(head);
	cout<<"\n";
	rev = reverse(head);
	cout<<"Reverse Link list is ";
	printlist(rev);
	cout<<"\n";
	// Mid = mid(rev);
	// cout<<"Mid of LL is "<<Mid->data;
	Op = op(2,2,rev);
	cout<<"\n";
	// cout<<Op->data;
	printlist(Op);
}	