#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

	int arr[100],n;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	int H,x;
	for(int i=0; i<n; i++) {
		x=1;
		x=x<<(arr[i]%10);
		cout<<"x="<<x<<endl;
		// cout<<x<<endl;
		int y = x&H;
		cout<<"y="<<y<<endl;
		if(y > 0){
		}
		if(y==0 && H>3) {
			cout<<"abc="<<arr[i]<<endl;
		}
		else{

			H = x|H;
			// cout<<arr[i]<<endl;
			cout<<"H="<<H<<endl;
		}


	}

	return 0;
}