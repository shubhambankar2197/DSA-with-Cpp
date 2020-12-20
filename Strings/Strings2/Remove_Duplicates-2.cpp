#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void RemoveDup(string str) {
    int H=0,x=0;
	    for(int i=0; str[i]!='\0'; i++) {
		x=1;
		x=x<<str[i]-97;
		// cout<<x<<endl;
		int y = x&H;
		if(y > 0){
			// cout<<"Duplicate is :"<<str[i]<<endl;
		}
		else{
			H = x|H;
			cout<<str[i];
			// cout<<H<<endl;
		}
	}
    
}

int main() {
    int testCase=0;
   	string str="kjkhjkgjhghjg hgfhggfgh  jhjhgjhghghfgfdfdghnbjhjkgfhgdfgvh             jkgtrtyrtuiokjhj              kjnkjljiohsdiufhgbsiudfguisdgbfuisdgbc uvjdbsjuhvb jhxcb";
    // cin>>testCase=0;
    while(testCase>=0) {
        cout<<endl;
        // getline(cin,str);
        RemoveDup(str);
        testCase--;
        // cout<<testCase;
       
    }
    
	return 0;
}