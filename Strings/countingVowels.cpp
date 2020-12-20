#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countingVowels(string str) {
	int count=0;
	string::size_type pos = str.find_first_of("aeiou");
		while(pos!=string::npos) {
			count++;
			pos = str.find_first_of("aeiou",pos+1);
		}
		return count;
}

int  main() {
	int n;
	cin>>n;
	while(n) {
		int x;
		string str;
		cout<<"sfc";
		cin>>str;
		x = countingVowels(str);
		cout<<x;
		n--;
	}
	

}