// Asked on Hackerearth/heaps

/* Taking too much time. The better solution is using heapSort. The given logic is also correct..*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void largestusingMaxHeap(vector<int>arr, int k, int n) {
	make_heap(arr.begin(), arr.end());
	while(k-1>0) {
		pop_heap(arr.begin(), arr.end());
		arr.pop_back();
		k--;
	}
	cout<<arr.front()<<"\n";
}

void smallestUsingMinHeap(vector<int> arr, int k, int n) {
	make_heap(arr.begin(),arr.end(),greater<>());
	while(k-1>0) {
		pop_heap(arr.begin(), arr.end(),greater<>());
		arr.pop_back();
		k--;
	}
	cout<<arr.front()<<"\n";
}

int main() {
	int n,q,x;
	cin>>n;
	
	vector<int>arr;
	for(int i=0; i<n; i++) {
		cin>>x;
		arr.push_back(x);
	}
	cin>>q;
	int k;
	char c;
	while(q>0) {
		cin>>k>>c;
		if(c=='l'||c=='L') {
			largestusingMaxHeap(arr,k,n);
		}	

		if(c=='s' || c=='S') {
			smallestUsingMinHeap(arr,k,n);
		}
		q--;
	}
}