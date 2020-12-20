#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	str = "abcdefgh";
	int n=3, m=6;
	string::size_type pos = n;
	sort(str.begin()+n, str.begin()+m, greater<>());
	cout<<str;
	return 0;
}