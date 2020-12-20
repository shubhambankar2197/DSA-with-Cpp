#include<iostream>
using namespace std;
// Defining the maximum size of the stack
#define MAX 10
// structure defining the stack
struct stack{
	int arr[MAX], top;
	stack() {
		top = -1;
	}
};

//Function to push an element into the stack
void push(stack *st, int ele) {
	if(st->top == MAX-1) {
		cout<<"Overflow"<<" ";
	}
	else{
		st->top++;
		st->arr[st->top] = ele;
	}
}

//Function to pop an element from the stack
void pop(stack *st) {
	if(st->top==-1) {
		cout<<"Underflow"<<" ";
	}
	else{
		int k = st->arr[st->top];
		st->top--;
	}
}

//Function to display the top of the stack.
int peek(stack *st) {
	if(st->top == MAX-1){
		cout<<"Overflow"<<" ";
		return -1;
	}
	else if(st->top == -1) {
		cout<<"Underflow" <<" ";
		return -1;

	}
	else {
		return st->arr[st->top];
	}
}

int main() {
	stack *st = new stack(); //creating  the stack object
	push(st,2);
	push(st,3);
	pop(st);
	cout<<peek(st);
	
}