#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	//cin>>ws;
	getline(cin,s);
	int arr[s.length()-1];
	int x,count=0,y;
	for(int i=0; i<s.length(); i++) {
		x = s[i] - '0';
		if(x%2==0) {
			count++;
		}
	}

	arr[0] = count;
	//cout<<arr[0];

	for(int i=1; i<s.length(); i++) {
		x = s[i] - '0';
		y = s[i-1] - '0';
		cout<<x<<" "<<y<<endl;
		if(x%2==0) {
			if(y%2==0) {
				arr[i] = arr[i-1] - 1;
				//cout<<arr[i]<<endl;
			}
			else{
				arr[i] = arr[i-1];
			}
			
		}
		else{
			if(y%2==0) {
				arr[i] = arr[i-1] - 1;
				//cout<<arr[i]<<endl;
			}
			else{
				arr[i] = arr[i-1];
			}
		}
	}

	for(int i=0; i<s.length(); i++) {
		cout<<arr[i]<<" ";
	}
}