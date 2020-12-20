#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int temp = n&n-1;
	cout<<temp<<" ";
	if(temp==0) {
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
}
