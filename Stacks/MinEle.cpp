#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	stack <int> s;
	s.push(2);
	s.push(3);
	s.push(1);

	int val = s.size();
	// cout<<s.top()+2;
	cout<<min(s.top(),s.top()+val);
}