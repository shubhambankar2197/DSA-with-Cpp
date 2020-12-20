//Asked on HackerEarth/heaps
//All testCases Passed, within the given time complexity. 

#include<bits/stdc++.h>
using namespace std;

void buildHeap(vector<long long> &arr, int n, int i) {
	int parent = (i-1) / 2;
	if(arr[i] > arr[parent]) {
		swap(arr[i],arr[parent]);
		buildHeap(arr,n,parent);
	}
}

void printHeap(vector<long long> &arr) {
	vector<long long>::iterator it = arr.begin();
	while(it!=arr.end()) {
		cout<<*it<<" ";
		it++;
	}
	cout<<"\n";
}

long long int mul(vector<long long> arr, int i) {
	long long int y=1;
	int l=3,z;
	//printHeap(arr);
	while(l>0 && i>0) {
		z = arr[0];
		y = y * z;
		pop_heap(arr.begin(), arr.begin()+i);
		//printHeap(arr);
		i--;
		l--;
	}
	return y;
}

int main() {
	long long int n,x,res;
	cin>>n;
	vector<long long> arr;
	for(int i=0; i<n; i++) {
		cin>>x;
		arr.push_back(x);
	}

	make_heap(arr.begin(), arr.begin()+3);
	res = mul(arr,3);
	cout<<"-1"<<"\n"<<"-1"<<"\n"<<res<<"\n";
	int i=3;
	while(i<n) {
		cout<<arr[i]<<" "<<arr[0]<<endl;
		if(arr[i] > arr[0] || arr[i] > arr[1] || arr[i] > arr[2]) {
			push_heap(arr.begin(), arr.begin()+i+1);
			//buildHeap(arr,n,i);
			res = mul(arr,i+1);
		}
		cout<<res<<"\n";
		i++;
		
	}

}