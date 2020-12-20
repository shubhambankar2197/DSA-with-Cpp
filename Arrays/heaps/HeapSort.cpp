#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/* HeapSort has 2 functions - first to build a maxHeap and then do sorting according to this
max heap by taking out the root element and placing it at the end of the array.*/


void buildMaxHeap(vector<int> &arr, int n, int i) {
	int left =(2*i) + 1;
	int right = (2*i) + 2;
	int x;
	if(left < n && arr[left] > arr[i]) {
		x =left;
	}
	else {
		x = i;
	}

	if(right < n && arr[right] > arr[x]) {
		x = right;
	}

	if(x!=i) {
		swap(arr[i],arr[x]);
		buildMaxHeap(arr,n,x);
	}
}


void heapSort(vector<int> &arr, int n) {
	while(n>0) {
			swap(arr[0],arr[n-1]);		
			n--;
			buildMaxHeap(arr,n,0);
		}
}


void printHeap(vector<int> &arr) {
	vector<int>::iterator it = arr.begin();
	while(it!=arr.end()) {
		cout<<*it<<" ";
		it++;
	}
	cout<<"\n";
}

int main() {
	vector<int> arr;
	int n,x;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>x;
		arr.push_back(x);
	}

// First Step is to build a maxHeap. Following function builds a max heap.
	int i=(n/2)-1;
	while(i>=0) {
		buildMaxHeap(arr,n,i);
		i--;
	}
	cout<<"Max heap is: "<<"\n";
	printHeap(arr);

	
//Second step is to sort the heap by taking the root element and placing it at last position.
//Following function implements sorting. Time Compexity is O(nlogn).	
	heapSort(arr,n);
		
		
	
	cout<<"Sorted heap is: "<<"\n";
	printHeap(arr);

}