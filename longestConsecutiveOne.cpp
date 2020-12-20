#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	// stack <int> s;
	int n,temp,max=0,count=0;
	cin>>n;
	while(n>0) {
		temp = n%2;
		if(temp==1) {
			count++;
			if(count>max) {
				max=count;
			}
		}
		else {
			count=0;
		}
		

		n=n/2;
	}
	cout<<max;
}