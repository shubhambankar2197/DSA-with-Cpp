#include<bits/stdc++.h>
using namespace std;
/* 
It is sunny outside

I i s o
t s u u
    n t
    n s
    y i
      d
      e



*/
void pattern(string str) {
	vector<char> arr[100];
	int n = str.length()-1;
	int i=0,pos=0; 
	char x;
	int max=0;

	while(str[i]!='\0' && i<=n) {
		if(str[i]!=' ') {

			x = str[i];
			arr[pos].push_back(x);
			pos++; 
			
		}
		if(str[i]==' '){

			pos=0;
		}
		i++;
	}

	for(int j=0; j<pos; j++) {
		cout<<"\n";
		if(arr[j].size() > max) {
			max = arr[j].size();
		}
		int y;
		if(arr[j].size()<max) {
			y = max-arr[j].size();
			while(y>=0) {
				cout<<" ";				
				y--;
			}
		}
		for(auto k = arr[j].begin(); k!=arr[j].end(); k++) {
			cout<<*k<<" ";
		}
	}
	cout<<"\n";
}	


int main() {
	string str;
	getline(cin,str);
	pattern(str);

}