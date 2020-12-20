#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void isValid(string s) {
	map <char,int> freq;
	for(int i=0; i<s.length(); i++) {
		freq[s[i]]++;
	}

	for(auto i:freq) {
		cout<<i.first<<":"<<i.second<<" ";
	}

	std::map<char,int>::iterator i = freq.begin();
	std::map<char,int>::iterator j = freq.begin();

	while(i!=req.end()) {
		if(i->second)
	}
	cout<<i->first;

}


int main() {
	string s;
	getline(cin,s);
	isValid(s);
	return 0;
}
