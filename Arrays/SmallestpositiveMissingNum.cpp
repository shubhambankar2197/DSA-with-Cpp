#include<bits/stdc++.h>
using namespace std;

void print(int *arr, int n) {
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
}

void buildMinHeap(int *arr, int n, int i) {
    int parent = (i-1)/2;
    if(i<n && arr[i] < arr[parent]) {
        swap(arr[i],arr[parent]);
        buildMinHeap(arr,n,parent);
    }
}

void missingNum(int arr[], int n) {
	int smallestMissingNum = 1;
    int j=0;
    // while(j<n) {
    // 	if(arr[j]<0) {
    // 		arr[j] = 0;
    // 	}
    // 	j++;
    // }

    for(int i=1; i<n; i++) {
        buildMinHeap(arr,n,i);
    }
    print(arr,n);
}

int main() {
	int t,n,x;
	cin>>t;
	int arr[10000];
	while(t>0) {
		cin>>n;
		for(int i=0; i<n; i++) {
			cin>>arr[i];
		}
		missingNum(arr,n);
		t--;
	}
}