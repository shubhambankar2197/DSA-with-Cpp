#include<bits/stdc++.h>
using namespace std;

void print(vector<long int> arr) {
	for(auto j: arr) {
		cout<<j<<" ";
	}
	cout<<endl;
}

void printMaxheap(priority_queue<long int> pq) {
	while(!pq.empty()) {
		cout<<pq.top()<<" ";
		pq.pop();
	}

	cout<<endl;
}

void printMinheap(priority_queue<long int, vector<long int>, greater<long int>> pq) {
	while(!pq.empty()) {
		cout<<pq.top()<<" ";
		pq.pop();
	}

	cout<<endl;
}

int main() {
	long int q;
	char type;
	long int x;
	cin>>q;
	vector<long int> arr;
	
	

	while(q>0) {
		cin>>type;
		if(type=='1') {
			cin>>x;
			arr.push_back(x);
			
			print(arr);
		}

		if(type=='2') {
			cin>>x;
			long int n = arr.size();
			//int flag=0;
			long int i=0;
			for( ; i<n; i++) {
				if(arr[i]==x) {
					swap(arr[i],arr[n-1]);
					arr.pop_back();
					print(arr);
					//flag=1;
					break;
				}

				
			}
			if(i==n) {
					cout<<"-1"<<endl;
			}

		}
		
		if(type=='3') {
			priority_queue<long int> maxHeap(arr.begin(), arr.end());
			if(!maxHeap.empty()) {
				cout<<maxHeap.top()<<endl;
			}
			else{
				cout<<"-1"<<endl;
			}
			
			printMaxheap(maxHeap);
		}

		if(type=='4') {
			priority_queue<long int, vector<long int>, greater<long int>> minHeap(arr.begin(),arr.end());
			if(!minHeap.empty()) {
				cout<<minHeap.top()<<endl;
			}
			else{
				cout<<"-1"<<endl;
			}
			printMinheap(minHeap);
		}
		q--;
	}
}