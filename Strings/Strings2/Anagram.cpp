#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	string str1="geeksforgeeks";
	string str2="forgeeksgeeks";
	int len1 = str1.length();
	int len2 = str2.length();
	if(len1 != len2)
		cout<<"NOT ANAGRAM"<<endl;
	
	int flag=1;
		
	std::map<char, int> mp1;
	for(int i=0; i<str1.length(); i++) {
		mp1[str1[i]]++;
	}

	std::map<char, int> mp2;
	for(int i=0; i<str2.length(); i++) {
		mp2[str2[i]]++;
	}

	std::map<char, int>::iterator it1 = mp1.begin();
	std::map<char, int>::iterator it2 = mp2.begin();

	while(it2!=mp2.end()) {
		if(it1->first == it2->first ) {
			if(it1->second == it2->second) {
				flag=1;
			}
		}

		else {
			flag=0;
		}

		it1++;
		it2++;
	}

	if(flag==0)
		cout<<"NO";
	else
		cout<<"YES";

	// for(map<char,int>::iterator it = mp1.begin(); it!=mp1.end(); it++) {
	// 	cout<<it->first<<it->second<<" ";
	// }
	return 0;

}