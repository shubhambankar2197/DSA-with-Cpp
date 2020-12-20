#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	string str = "hashes";
	int count=0;
	string::size_type pos = str.find_first_of("aeiou");
	while(pos!=string::npos) {
		count++;
		pos = str.find_first_of("aeiou",pos+1);
	}
	cout<<count<<" "<<str.length()<<endl;

}
