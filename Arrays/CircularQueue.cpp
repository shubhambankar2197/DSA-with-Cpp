#include<iostream>
using namespace std;
int arr[100], head=-1, rear=-1;

void push(int ele) {
	if((rear+1)%5 == head) {
		cout<<"max reached";
	}
	else{
		rear = (rear + 1)%5;
		arr[rear] = ele;
	}
}

int pop() {
	if(head==rear) {
		return -1;
	}
	else{
		head =  (head+1) % 5;
		int k = arr[head];
		return k;
	}
	
}


int main(){
	cout<<head<<" "<<rear<<"\n";
	push(1);
		cout<<head<<" "<<rear<<"\n";

	push(2);
	// cout<<pop()<<" "<<pop();
		cout<<head<<" "<<rear<<"\n";

	push(3);
	cout<<head<<" "<<rear<<"\n";

	push(4);
		cout<<head<<" "<<rear<<"\n";

	push(5);
		cout<<head<<" "<<rear<<"\n";

	pop();
		cout<<head<<" "<<rear<<"\n";

	pop();
		cout<<head<<" "<<rear<<"\n";

	pop();

		cout<<head<<" "<<rear<<"\n";

	push(6);
			cout<<head<<" "<<rear<<"\n";

	pop();
			cout<<head<<" "<<rear<<"\n";

	pop();
			cout<<head<<" "<<rear<<"\n";

	pop();
			cout<<head<<" "<<rear<<"\n";
pop();
			cout<<head<<" "<<rear<<"\n";

push(7);
			cout<<head<<" "<<rear<<"\n";

push(8);
	for(int i=0; i<5; i++) {
		cout<<arr[i]<<" ";
	}
	// cout<<arr[0]<<" "<<arr[1];
}