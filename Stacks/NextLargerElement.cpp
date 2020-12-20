#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	stack <int> s;
	int maxEle,temp;

	int n,x,y,prevMax;
	cin>>n;
	y=n;
	while(n>0) {
		cin>>x;
		
		if(s.empty()) {
		maxEle = x;
		s.push(x);
		}
		
		if(x>maxEle) {
		s.push(2*x - maxEle);
		maxEle = x;
		}

		else {
			s.push(x);
		}
		n--;
	}

	while(y>0) {
		temp = s.top();
		s.pop();
		if(temp > maxEle) {
			cout<<maxEle<<" ";
			maxEle = 2*maxEle - temp;
		}
		else {
			cout<<maxEle<<" ";
		}
		y--;

	}
}
//1 3 2 4
//1 5 2 5