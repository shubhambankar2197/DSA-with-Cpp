// The problem is given on leetCode
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Input: arr = [17,18,5,4,6,1]
//Output: [18,6,6,6,1,-1]

void replaceElements(vector<int> &arr) {
	int n = arr.size();
	int max,j;
	for(int i=0; i<n; i++) {
		max=-1;
		j = i+1;
		while(j<n) {
			if(arr[j] > max) {
				max = arr[j];
			}
			j++;
		}
		arr[i]=max;
	}

	for(auto j :arr) {
		cout<<j<<" ";
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
	replaceElements(arr);
}