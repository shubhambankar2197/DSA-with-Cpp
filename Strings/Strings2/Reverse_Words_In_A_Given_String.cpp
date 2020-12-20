#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	string str1 = "i.like.this.program.very.much";
	string::size_type pos = str1.find_first_of(".");
	while(pos!=string::npos) {
		str1[pos]=' ';
		pos = str1.find_first_of(".",pos+1);
	}
	int count=0;
	cout<<str1<<endl;
	stringstream ss;
	stack<string> str2;
	ss<<str1;
	string temp;
	str1="";
	while(!ss.eof()){
		ss>>temp;
		str2.push(temp);
		
	}
	string str3;
	while(!str2.empty()) {
		str3 = str3 + str2.top()+".";
		// cout<<str2.top()<<endl;
		str2.pop();
	}
	str3.pop_back();
	cout<<str3;


}