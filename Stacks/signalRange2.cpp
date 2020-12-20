#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printS(stack<long>s) {
	while(!s.empty()) {
		cout<<s.top()<<" ";
		s.pop();
	}
}


void signalRange(long *arr, long n) {
	stack <long> s1,s2;
	long t;
	s1.push(arr[0]);
	cout<<"1"<<" ";
	for(int i=1; i<n; i++) {
		if(s1.top() > arr[i]) {
			s1.push(arr[i]);
			cout<<"1"<<" ";
		}

		else {
			// cout<<"s1"<<" ";
			// printS(s1);
			while(!s1.empty() && (s1.top() <= arr[i])) {
			// cout<<"s1.top = "<<s1.top()<<endl;

				s2.push(s1.top());
				s1.pop();
				// cout<<"s2"<<" ";
				// printS(s2);
				}
			cout<<s2.size()+1<<" ";
			while(!s2.empty()) {
				// cout<<s2.top()<<endl;
				s1.push(s2.top());
				s2.pop();
			}
			s1.push(arr[i]);
		}
	}



}



int main() {
	long testCase,n,arr[1000000];
	cin>>testCase;
	while(testCase>0) {
		cin>>n;
		for(int i=0; i<n; i++) {
			cin>>arr[i];
		}
		signalRange(arr,n);
		cout<<endl;
		testCase--;
	}
	return 0;
}