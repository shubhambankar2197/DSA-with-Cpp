#include<bits/stdc++.h>
using namespace std;
int duplicate(vector<int>arr) {
	int i=0,j=1,count=0;
	while(i<=arr.size() && j<=arr.size()) {
		if(arr[i]==arr[j]) {
			j++;
		}
		else{
			cout<<arr[i]<<" ";
			i=j;
			j++;
			count++;
		}
	}
	return count;
}


int main() {
	std::vector<int> arr;
	int n=7,x;
	for(int i=0; i<n; i++) {
		cin>>x;
		arr.push_back(x);
	}

	int count = duplicate(arr);
	cout<<count;
}