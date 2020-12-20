#include<iostream>
using namespace std;

//initialization --> array and top=-1. Both are declared as global
int arr[100],top=-1;

//Function to push an element into the stack
void push(int ele) {
	if(top>=5) {
		cout<<"Overflow";
	}
	else{
		top++;
		arr[top] = ele;
	}
}

//Function to pop element from he stack. Function returns the popped element.
int pop() {
	int k;
	if(top==-1) {
		cout<<"underflow";
		return -1;
	}
	else{
		top--;
		k = arr[top];
		return k;

	}
}

//Function to see the top tof the stack. The function returns the top of the stack.
int peek() {
	if(top==-1) {
		return -1;
	}
	else if(top>=5) {
		return -1;
	}
	else {
		return arr[top];
	}
}

int main() {
	push(5);
	push(6);

	push(7);
	pop();
	// cout<<top;
	push(8);
	push(10);
	pop();
	int z = peek();
	cout<<z<<"\n";
	
}
