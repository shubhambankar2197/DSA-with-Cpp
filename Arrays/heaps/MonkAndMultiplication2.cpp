#include<bits/stdc++.h>
using namespace std;
void asd(priority_queue<int> pq) {
	pq.pop();
	while(!pq.empty()) {
		cout<<pq.top()<<" ";
		pq.pop();
	}
	cout<<endl;
}


int main() {
	int n,x;
	cin>>n;
	vector<int> arr;
	for(int i=0; i<n; i++) {
		cin>>x;
		arr.push_back(x);
	}
	//cout<<"-1"<<"\n"<<"-1"<<"\n";
	int i=3,z;
	// while(i<=n) {
	// 	int y=1,k=3;
		priority_queue<int> pq(arr.begin(),arr.begin()+i);

	// 	while(!pq.empty() && k>0) {
	// 		z = pq.top();
	// 		y = y * z;
	// 		pq.pop();
	// 		k--;
	// 	}
	// 	cout<<y<<"\n";
	// 	i++;
	// }

		asd(pq);
		while(!pq.empty()) {
			cout<<pq.top()<<" ";
			pq.pop();
		}
}