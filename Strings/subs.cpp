#include <iostream>
using namespace std;
int main() {
	string s1 = "abaa";
	string s2 = "abc";
	if(s1.find(s2)!=string::npos) {
		cout<<"Yes";
	}
	else {
		cout<<"No";
	}
}