// Asked on Hackerearth/heaps

/* Taking oo much time. The better solution is using heapSort. The given logic is also correct..*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void largestusingPriorityQueue(vector<int> &arr, int k, int n) {
	priority_queue<int> pq (arr.begin(), arr.end());
		while(k-1>0) {
			pq.pop();
			k--;
		}
		cout<<pq.top()<<"\n";
}

void smallestUsingPriorityQueue(vector<int> &arr, int k, int n) {
	priority_queue<int> pq (arr.begin(), arr.begin()+k);
	int i=k;
	while(i<n) {
		if(pq.top() > arr[i]) {
			pq.pop();
			pq.push(arr[i]);
		}
		i++;
	}

	cout<<pq.top()<<"\n";

}

int main() {
	int n,q,x;
	cin>>n;
	
	vector<int>arr;
	for(int i=0; i<n; i++) {
		cin>>x;
		arr.push_back(x);
	}
	cin>>q;
	int k;
	char c;
	while(q>0) {
		cin>>k>>c;
		if(c=='l'||c=='L') {
			largestusingPriorityQueue(arr,k,n);
		}	

		if(c=='s' || c=='S') {
			smallestUsingPriorityQueue(arr,k,n);
		}
		q--;
	}
}