//100 80 60 70 60 75 85
// 1  1  1  2  1  4  6

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void signalRange(long *arr, long n) {
	stack<long>s;
	long count=0;
	s.push(arr[0]);
	cout<<"1"<<" ";
	//27649 21137 4990 24012 22224 9835 86 28239
	// cout<<s.top()<<" "<<endl;
	for(int i=1;i<n; i++) {
		if(s.top()>arr[i]) {
			s.push(arr[i]);
			// cout<<s.top()<<" "<<endl;
			cout<<"1"<<" ";
		}
		else {
			while((!s.empty() )&& (s.top() < arr[i])) {
				count=count+1;
				// cout<<s.top()<<" "<<endl;

				s.pop();
			}
			cout<<count+1<<" ";
			s.push(arr[i]);
			// cout<<s.top()<<" "<<endl;


		}
	}
	
}
int main() {
	long testCase,n,arr[100000];
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