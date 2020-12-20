// Asked on Hackerearth/heaps
/* Taking oo much time. The better solution is using heapSort. The given logic is also correct..*/

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

void smallestUsingMaxHeap(vector<int> arr, int k, int n) {
	make_heap(arr.begin(),arr.begin()+k);
	int j=k;
	while(k<n) {
		if(arr[k]<arr[0]){
			swap(arr[k],arr[0]);
			make_heap(arr.begin(),arr.begin()+j);

		}
		k++;
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
			smallestUsingMaxHeap(arr,k,n);
		}
		q--;
	}
}