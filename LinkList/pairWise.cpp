#include <iostream>
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

	while(temp2->next) {
		temp2 = temp2->next;
	}
	temp2 -> next = temp;
	return head;
}


int Count(Node *head) {
	int count=0;
	Node *temp = head;
	while(temp) {
		count++;
		temp = temp->next;
	}
	return count;
}

Node *pairwise(Node *head) {
	Node *temp = head;
	int count = Count(head);
	while(temp) {
		if(count%2==0) {
			int temp2 = temp -> data;
			temp->data=temp->next->data;
			temp->next->data=temp2;
			temp = temp -> next->next;
		}
		else {
			int temp2 = temp -> data;
			temp->data = temp->next->data;
			temp->next->data=temp2;
			temp = temp->next->next;
			if(temp->next==NULL) 
				break;
		}
		

	}
	// cout<<head->data;
	// cout<<head->next->data;
	return head;
}

void printlist(Node *head) {
	Node *temp = head;
	if(temp) {
		cout<<temp->data;
		printlist(temp->next);
	}
}



int main() {
	int n,l;
	cin>>n;
	Node *head = NULL;
	Node *swap = NULL;
	for(int i=0; i<n; i++) {
		cin>>l;
		head = createList(l,head);
	}
	// printlist(head);
	swap = pairwise(head);
	printlist(swap);
}