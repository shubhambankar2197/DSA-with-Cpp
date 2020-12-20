#include<bits/stdc++.h>
using namespace std;
void median(vector<int> arr) {
	sort(arr.begin(),arr.end());
	int median;
	if(arr.size()==1) {
		cout<<arr[0]<<endl;
	}
	int n = arr.size();
	if((n%2)!=0 && n>1) {
		cout<<arr[n/2]<<endl;
	}
	int x,y;
	if((n%2)==0 && n>1) {
		median = (arr[(n-1)/2] + arr[n/2]) / 2;
		cout<<median<<endl;
	}
}


int main() {
	int n,x;
	cin>>n;
	vector<int> arr;
	for(int i=0; i<n; i++) {
		cin>>x;
		arr.push_back(x);
		median(arr);
	}
}