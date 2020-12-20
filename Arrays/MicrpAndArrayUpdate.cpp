#include<bits/stdc++.h>
using namespace std;

void ArrayUpdate(vector<int> arr,int k) {
	vector<int> temp;
	for(int i=0; i<arr.size(); i++) {
		if(arr[i]<k) {
			temp.push_back(arr[i]);
		}
	}

	for(auto j : temp) {
		cout<<j<<" ";
	}

	int max = 0,temp1;
	for(int i=0; i<temp.size(); i++) {
		temp1 = k - temp[i];
		if(temp1>max) {
			max = temp1;
		}
	}
	cout<<"max = "<<max<<"\n";
}


int main() {
	int testCases,n,k,x;
	cin>>testCases;
	while(testCases>0) {
		cin>>n>>k;
		vector<int> arr;
		for(int i=0; i<n; i++) {
			cin>>x;
			arr.push_back(x);
		}
		ArrayUpdate(arr,k);
		testCases--;
	}
}