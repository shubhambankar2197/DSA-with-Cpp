#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

//Function to build a heap by inserting element by element into the heap.
//The same function is also used to insert a new element into already build heap
void buildMaxHeapUp(vector<int> &arr, int n, int i) {
	int parent = (i-1) / 2;
	if(i<n && arr[parent] < arr[i]) {
		swap(arr[parent], arr[i]);
		buildMaxHeapUp(arr,n,parent);
	}
}

//Function used to heapify after removing  the top/root element from the heap.
//The below function is used when deletion is performed.
void buildMaxHeapDown(vector<int> &arr, int n, int i) {
	int left = (2*i)+1;
	int right = (2*i)+2;
	int x;
	if(left<=n && arr[left] > arr[i]) {
		x = left;
	}
	else {
		x = i;
	}

	if(right<=n && arr[right] > arr[x]) {
		x = right;
	}

	if(x!=i) {
		swap(arr[i], arr[x]);
		buildMaxHeapDown(arr,n,x);
	}
}



int main() {
	vector<int> arr;
	int n,x,y,z;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>x;
		arr.push_back(x);
	}

	int i=1;
	while(i<n) {
		buildMaxHeapUp(arr,n,i);
		i++;
	}

	cout<<"Max Heap is: "<<"\n";
	vector<int>::iterator it = arr.begin();
	while(it!=arr.end()) {
		cout<<*it<<" ";
		it++;
	}
	cout<<"\n";

	//Insertion into a heap. Time Complexity is O(log n)
	cout<<"Enter the number you want to insert : ";
	cin>>y;
	arr.push_back(y);
	n=n+1;
	cout<<n<<endl;
	buildMaxHeapUp(arr,n,n-1);


	cout<<"Max Heap is: "<<"\n";
	vector<int>::iterator it2 = arr.begin();
	while(it2!=arr.end()) {
		cout<<*it2<<" ";
		it2++;
	}
	cout<<"\n";


	//Deleting the top/root element from the heap. Time comlexity is O(logn)
	z = arr[0];
	cout<<"Deleting the root element : "<<z<<"\n";
	arr[0] = arr[n-1];
	arr.pop_back();
	buildMaxHeapDown(arr,n,0);

	// cout<<n;
	// cout<<arr[0];
	// n=n-1;
	// cout<<n<<endl;
	// buildMaxHeap(arr,n,);


	cout<<"Max Heap is: "<<"\n";
	vector<int>::iterator it3 = arr.begin();
	while(it3!=arr.end()) {
		cout<<*it3<<" ";
		it3++;
	}
	cout<<"\n";
}