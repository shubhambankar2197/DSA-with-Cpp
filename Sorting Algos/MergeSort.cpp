#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high) {
	vector<int> sorted;

	int k=low;
	int i=low;
	int j=mid+1;
	while(i<=mid && j<=high) {
		if(arr[i] <= arr[j]) {
			sorted.push_back(arr[i]);
			i++;
		}
		else{
			sorted.push_back(arr[j]);
			j++;
		}

		// k++;
	}

	while(i<=mid) {
		sorted.push_back(arr[i]);
		i++;
		//k++;
	}

	while(j<=high) {
		sorted.push_back(arr[j]);
		j++;
		//k++;
	}


	for(int s=low; s<=high; s++) {
		arr[s] = sorted[s-low];
	}
}



void mergeSort(vector<int> &arr, int low, int high) {
	if(low < high) {
		int mid = (low+high)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}


int main() {
	vector<int> arr;
	int x,n;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>x;
		arr.push_back(x);
	}
	int low = 0;
	int high = n-1;
	mergeSort(arr,low,high);
	for(int h=0; h<n; h++) {
		cout<<arr[h]<<" ";
	}
}