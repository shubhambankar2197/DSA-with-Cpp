#include<bits/stdc++.h>
using namespace std;

// )()()(

int main() {
	string str;
	getline(cin,str);
	int i=0;
	int close=0,open=0,count=0;
	while(i<str.length()) {
		if(str[i]==')') {
			close = close + 1;
		}
		if(str[i]=='(') {
		
			open = open + 1;
		}

		
		i++;
	}

	if(open==close) {
			count = count + open;
			open = 0;
			close = 0;
	}

	cout<<count;
}