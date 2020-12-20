#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[100],n;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

	unordered_map<int,int> hash;
	for(int i=0; i<n; i++) {
		hash[arr[i]] = hash[arr[i]] + 1;
	}

	int max_count=0, res = -1;
	for(auto i: hash) {
		if(max_count<i.second) {
			res = i.first;
			max_count = i.second;
		}
	}
	cout<<res;
	return res;
}