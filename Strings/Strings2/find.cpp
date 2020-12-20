#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	string str;
	getline(cin,str);
	int H=0,x=0;
	for(int i=0; str[i]!='\0'; i++) {
		x=1;
		x=x<<str[i]-97;
		// cout<<"x="<<x<<endl;
		// cout<<x<<endl;
		int y = x&H;
		// cout<<y<<endl;
		if(y > 0){
			// cout<<"Duplicate is :"<<str[i]<<endl;
		}
		else{
			if(y==0 && H>0)
				cout<<str[i]<<" ";

			H = x|H;
			// cout<<str[i]<<endl;
			// cout<<H<<endl;
		}
	}


	// cout<<H<<endl<<x;

	return 0;
}
