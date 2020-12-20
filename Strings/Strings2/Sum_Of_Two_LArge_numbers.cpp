#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	string str1 = "3333311111111111";
	string str2 = "44422222221111";
	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());
	cout<<str1<<endl<<str2;

	strigstream ss1(str1);
	strigstream ss2(str2);
	string temp,temp2;
	string sum;
	while(!ss1.eof() && !ss2.eof()) {
		ss1>>temp1;
		ss2>>temp2;

	}
}