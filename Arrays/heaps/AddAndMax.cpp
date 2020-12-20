#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,q,x;
	cin>>n;
	vector<long> arr;
	for(int i=0; i<n; i++) {
		cin>>x;
		arr.push_back(x);
	}

	make_heap(arr.begin(),  arr.end());
	cin>>q;
	int type,num;
	while(q>0) {
		cin>>type;
		if(type==1) {
			cin>>num;
			arr.push_back(num);
			push_heap(arr.begin(), arr.end());
		}

		if(type==2) {
			cout<<arr.front()<<"\n";
		}
		q--;
	}
}