#include<iostream>
#include<algorithm>
using namespace std;

//The function written uses bottom up approah to create a max-heap. The complexity is O(n). though it would seem it is O(nlogn),
//logn is very small and hence can be ignored.

void buildHeap(int *arr, int n, int i) {
	int left = (2*i) + 1;
	int right = (2*i) + 2;
	int x;
	if(left<n && arr[left] > arr[i]) {
		x =left;
	}
	else {
		x = i;
	}

	if(right<n && arr[right] > arr[x]) {
		x =right;
	}

	if(x!=i) {
		swap(arr[i],arr[x]);
		buildHeap(arr,n,x);
	}
}

void print(int *arr, int n) {
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n = 11;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	int i = (n/2)-1;
	cout<<i<<endl;

	while(i>=0) {
		buildHeap(arr,n,i);
		i--;
	}
	
	print(arr,n);
}