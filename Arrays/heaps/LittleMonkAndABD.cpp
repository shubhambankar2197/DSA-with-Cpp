// Asked on Hackerearth/heaps
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//The given solution is time consuming. 
/* Taking oo much time. The better solution is using heapSort. The given logic is also correct..*/

/*void largestusingMinHeap(int *arr, int k,int n) { 
	vector<int> v;
	// cout<<k<<n;

	for(int i=1; i<=k; i++) {
		v.push_back(arr[i]);
	}
	make_heap(v.begin(), v.end(),greater<>());
	for(int i=k+1; i<=n; i++) {
		//cout<<arr[i]<<"\n";
		if(arr[i]>v.front()) {
			pop_heap(v.begin(), v.end(),greater<>());
			v.pop_back();
			v.push_back(arr[i]);
			push_heap(v.begin(), v.end(),greater<>());
		}
	}
	// for(auto i: v) { cout<<i<<" ";}
	cout<<v.front();
}*/


void buildMaxHeap(vector<int> &arr, int k, int i) {
	// cout<<k<<" "<<i<<endl;
	int parent = (i-1)/2;
	while(i<k && arr[parent]<arr[i]) {
		swap(arr[i],arr[parent]);
		buildMaxHeap(arr,k,parent);
	}
}

void heapify(vector<int> &arr, int k, int i) {
		// cout<<k<<" "<<i<<endl;

	int left = (2*i)+1;
	int right = (2*i) + 2;
	int x;
	if(left<k && arr[left] > arr[i]) {
		x = left;
	}
	else{
		x = i;
	}

	if(right<k && arr[right] > arr[x]) {
		x = right;
	}

	if(x!=i) {
		swap(arr[x],arr[i]);
		heapify(arr,k,x);
	}
}

void largestusingMaxHeap(int *arr, int k, int n) {
	vector<int>v1;
	for(int i=0; i<n; i++) {
		v1.push_back(arr[i]);
	}

// for(int j=0; j<n; j++) {
// 		cout<<v1[j]<<" ";
		
// 	}
// 	cout<<endl;

	for(int i=1; i<n; i++) {
		buildMaxHeap(v1,n,i);
	}

	// for(int j=0; j<n; j++) {
	// 	cout<<v1[j]<<" ";
		
	// }
	// cout<<endl;
	while(k-1>0) {
		swap(v1[0],v1[n-1]);
		n--; 
		heapify(v1,n,0);
		k--;
			// for(auto j:v1){ cout<<j<<" ";}

	}
	cout<<v1[0]<<"\n";

}


void smallestUsingMaxHeap(int *arr, int k, int n) {
	vector<int> v;

	for(int i=0; i<n; i++) {
		v.push_back(arr[i]);
	}

	for(int i=1; i<k; i++) {
		buildMaxHeap(v,k,i);
	}

	// for(auto j:v){ cout<<j<<" ";}

	for(int i=k; i<n; i++) {
		if(arr[i]<v.front()) {
			swap(arr[i],v.front());
			heapify(v,k,0);
		}
	}

	cout<<v[0]<<"\n";
}

int main() {
	int n,q,x;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
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