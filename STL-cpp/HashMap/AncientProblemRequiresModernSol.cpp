#include<bits/stdc++.h>
using namespace std;
// not completed as time exceed error occurs
void sol(vector<long long int> arr, long long int d, long long int k, long long int l, long long int r) {
	// pair<long long int,long long int> p;
	// vector<long long int> index;
	// unordered_map<long long int,vector<long long int>> mp;
	// mp.reserve(100000);
	// unordered_map<long long int,vector<long long int>>::iterator it,it3;
	// for(long long int i=0; i<arr.size(); i++) {
	// 	//p=make_pair(arr[i],i);
	// 	it = mp.find(arr[i]);
	// 	if(it==mp.end()) {
	// 		mp[arr[i]].push_back(i);
	// 	}
	// 	else{
	// 		mp[arr[i]].push_back(i);
	// 	}
		
	// }

	// // for(auto it1 = mp.begin(); it1 != mp.end(); ++it1) {
	// // 	cout<<it1->first<<" -> ";
	// // 	for(auto it2 = it1->second.begin(); it2 != it1->second.end(); ++it2) {
 // //    		cout << *it2 <<" ";
	// // 	}
	// // 	cout<<"\n";

	// // }

	// // cout<<"\n";
	// it3 = mp.find(d);
	// if(it3==mp.end()) {
	// 	cout<<"-1"<<"\n";
	// }
	// else {
	// 	auto it2 = it3->second.begin();
	// 	while((k-1)>0) {
	// 		k--;
	// 		it2++;
	// 	}

	// 	if((*it2) >= l && (*it2) <=r) {
	// 		cout<<(*it2)+1<<"\n";
	// 	}
	// 	else {
	// 		cout<<"-1"<<"\n";			
	// 	}
	// }
	

	int i=l;
	while(i<=r && k>0) {
		if(arr[i]==d) {
			k--;
		}
		if(k==0) {
			break;
		}
		i++;
	}
	//cout<<k<<"\n";
	if(k!=0) {
		cout<<"-1"<<"\n";
	}
	else {
		cout<<i<<"\n";
	}


}

int main() {
	long long int n,q,x;
	long long int d,k,l,r;
	cin>>n>>q;
	std::vector<long long int> arr;
	for(long long int i=0; i<n; i++) {
		cin>>x;
		arr.push_back(x);
		
	}
	while(q>0) {
		cin>>d>>k>>l>>r;
		sol(arr,d,k,l-1,r-1);
		q--;
	}
	
}