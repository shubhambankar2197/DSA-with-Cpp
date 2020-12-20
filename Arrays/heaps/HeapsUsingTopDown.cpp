#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


void buildMaxHeap(vector<int> &arr, int n, int i) {
	int parent = (i-1) / 2;
	if(i<n && arr[parent] < arr[i]) {
		swap(arr[parent], arr[i]);
		buildMaxHeap(arr,n,parent);
	}
}

int main() {
	vector<int> arr;
	int n,x;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>x;
		arr.push_back(x);
	}

	int i=1;
	while(i<n) {
		buildMaxHeap(arr,n,i);
		i++;
	}

	vector<int>::iterator it = arr.begin();
				while(it!=arr.end()) {
					cout<<*it<<" ";
					it++;
				}
				cout<<endl;

	
}