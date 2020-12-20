#include<bits/stdc++.h>
using namespace std;
//Asked in HackerEarth heaps/priority Queues
//Accepted Fully within time constraint.
int main() {
	int n, m, x;
	cin>>n>>m;
	vector<int> arr;
	for(int i=0; i<n; i++) {
		cin>>x;
		arr.push_back(x);
	}
	map<int,int> mp;
	map<int,int>::iterator it;
	pair<int,int> p,q;
	priority_queue<pair <int,int>> pq;
	// p = make_pair(arr[0],1);
	// mp.insert({p});
	// pq.push(p);
	int y;
	for(int i=0; i<n; i++) {
		//cout<<arr[i]<<endl;
		it = mp.find(arr[i]); //How to actuallyb search for a key in a map.

		// for(auto j: mp) {
		// 	cout<<j.first<<" asdf "<<j.second<<endl;
		// }
		if(it==mp.end()) {
			p = make_pair(1,arr[i]);
			mp.insert({arr[i],1});
			pq.push(p);
			q = pq.top();
			//cout<<"if part"<<endl;
			cout<<q.second<<" "<<q.first<<endl;
		}
		else {
			it->second = it->second + 1; //how to change the value part of the key-value pair in map.
			//cout<<it->second<<endl;
			p = make_pair(it->second,arr[i]);
			pq.push(p);
			q = pq.top();
			//cout<<"else part"<<endl;
			cout<<q.second<<" "<<q.first<<endl;
		}

	}
	
}