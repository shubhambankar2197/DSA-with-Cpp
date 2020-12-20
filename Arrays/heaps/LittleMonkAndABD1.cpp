// Asked on Hackerearth/heaps
/* Taking oo much time. The better solution is using heapSort. The given logic is also correct..*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void buildMaxHeap(vector<int>&arr, int i, int n) {
	int left = (2*i)+1;
	int right = (2*i)+2;
	int x;
	if(left<n && arr[left] > arr[i]) {
		x = left;
	}
	else {
		x = i;
	}
	if(right<n && arr[right] > arr[x]) {
		x = right;
	}

	if(x!=i) {
		swap(arr[i],arr[x]);
		buildMaxHeap(arr,x,n);
	}
}

void largestusingMaxHeap(vector<int>arr, int k, int n) {
	for(int i=(n-1)/2; i>=0; i--) {
		buildMaxHeap(arr,i,n);
	}

	while(k-1>0) {

		swap(arr[0],arr[n-1]);
		n--;
		buildMaxHeap(arr,0,n);

		k--;
	}
	cout<<arr.front()<<"\n";
}


void smallestUsingMaxHeap(vector<int> arr, int k, int n) {
	for(int i=k-1; i>=0; i--) {
		buildMaxHeap(arr,i,n);
	}

	for(int i = k; i<n; i++) {
		if(arr[i]<arr[0]) {
			swap(arr[i],arr[0]);
			buildMaxHeap(arr,0,k);
		}
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