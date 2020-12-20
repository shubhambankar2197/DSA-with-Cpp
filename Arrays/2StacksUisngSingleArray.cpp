#include<iostream>
using namespace std;
#define MAX 5
class stack {
	public :
	int arr[MAX], top1, top2;
	stack() {
		top1 =-1;
		top2 = MAX;
	}

	void push(int ele, int s) {
		if(s==1) {
			if(top1==MAX-1 || top1>=top2) {
				cout<<"Overflow";
			}
			else{
				top1++;
				arr[top1] = ele;
			}
		}
		else{
			if(top2==0 || top2<=top1) {
				cout<<"Overflow";
			}
			else{
				top2--;
				arr[top2] = ele;
			}
		}
	}


	void pop(int s) {
		if(s==1) {
			if(top1==-1) {
				cout<<"No elements";
			}
			else{
				int k = arr[top1];
				top1--;
			}
		}
		else {
			if(top2==MAX) {
				cout<<"No elements";
			}
			else{
				int k = arr[top2];
				top2++;
			}
		}
	}


	int peek(int s) {
		if(s==1) {
			return arr[top1];
		}
		else{
			return arr[top2];
		}
	}
};

int main() {
	stack s1;
	//1 = stack1, 2 = stack2
	s1.push(2,1); //s1.push(ele, stack);
	s1.push(5,1);
	s1.push(4,2);
	// s1.pop(1);
	cout<<s1.peek(2);
	
}