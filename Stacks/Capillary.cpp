//Completed and submitted by Andromeda

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,x;
	cin>>n;
	list<int> v;
	stack<int> s1,s2;
	for(int i=0; i<n; i++) {
		cin>>x;
		v.push_back(x);
	}

	// stack::iterator it = s1.top();
	// int len = s1.size();
	// cout<<s1.top()<<endl;
	// cout<<len;
	 list<int>::iterator ptr ;
	 list<int>::reverse_iterator ptr2 ;
	 // cout<<*ptr<<" "<<*ptr2;

	 for(ptr=v.begin(); ptr!=v.end(); ptr++) {
	 	s1.push(*ptr);
	 }

	 for(ptr2=v.rbegin(); ptr2!=v.rend(); ptr2++) {
	 	s2.push(*ptr2);
	 }
	 int a,b;
	 while(!s1.empty() && !s2.empty()) {
	 	b = s1.top(); //3
	 	a = s2.top(); //1 //2
	 	cout<<a<<"  "<<b<<endl;
	 	// cout<<a<<endl<<b<<endl;
	 	if(a>b) {
	 		cout<<"1"<<" ";
	 		s1.pop();
	 	}
	 	if(b>a) {
	 		cout<<"2"<<" ";
	 		s2.pop();
	 	}
	 	if(a==b) {
	 		cout<<"0"<<" ";
	 		s1.pop();
	 		s2.pop();
	 	} 
	 }

	 // cout<<s1.top()<<" "<<s2.top();
	 
}
//a = 3
//b = 1


//1 2 3
//	  s1
//s2	
//2 2 0