#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// [0,0,1,1,1,2,2,3,3,4]

int removeDuplicates(vector<int> &arr) {
	int len=1;
	int n = arr.size();
	int i=0,j=1,k=1;
	if(arr.empty()) {
		return null;
	}
	else{
		while(i<n && j<n) {
			if(arr[i]==arr[j]) {
				i++; j++;
			}
			else{
				arr[k] = arr[j];
				j++;
				i++; k++; len++;
			}
		}
		return len;
	}
	
}

int main() {
	int n,x;
	vector<int> arr;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>x;
		arr.push_back(x);
	}
	int len = removeDuplicates(arr);
	// cout<<len;
	// cout<<arr[0]<<" "<<arr[len-1];
	for(int i=0; i<len; i++) {
		cout<<arr[i]<<" ";
	}
}