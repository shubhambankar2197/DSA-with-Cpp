#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	char arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

	string s = arr;
	//cout<<s;
	int count=1,max=0;
	for(int i=0; i<n; i++) {
		if(arr[i]==arr[i+1]) {
			count++;
		}
		if(count > max) {
			max = count;
		}
		if(arr[i]!=arr[i+1]) {
			count = 1;
		}
	}

	cout<<max; 
}