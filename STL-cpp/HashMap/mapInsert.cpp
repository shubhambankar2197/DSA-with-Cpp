#include<bits/stdc++.h>
using namespace std;
int main() {
	map<char,int> mp;
	pair<char,int> p;
	p = make_pair('a',200);
	mp.insert(p);
	p = make_pair('b',500);
	mp.insert(p);
	for(auto x: mp) {
		cout<<x.first<<"->"<<x.second<<"\n";
	}


}