#include<iostream>
using namespace std;
int arr[100], head=-1, rear=-1;

void push(int ele) {
	if(rear>=5) {
		cout<<"max reached";
	}
	else{
		rear++;
		arr[rear] = ele;
	}
}

int pop() {
	if(head==rear) {
		return -1;
	}
	else{
		head++;
		int k = arr[head];
		return k;
	}
	
}


int main(){
	push(1);
	push(2);
	// cout<<pop()<<" "<<pop();
	push(3);
	push(4);
	push(5);
	pop();
	pop();
	pop();
	pop();
	pop();

	push(6);

	cout<<head<<" "<<rear;
	// cout<<arr[0]<<" "<<arr[1];
}