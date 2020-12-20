#include<bits/stdc++.h>
using namespace std;

void print(vector<int> arr) {
	for(auto j: arr) {
		cout<<j<<" ";
	}
	cout<<endl;
}

int main() {
	vector<int> arr;
	int x,type,q,n;
	cin>>q;
	while(q>0) {
		cin>>type;
		if(type==1) {
			cin>>x;
			arr.push_back(x);
			print(arr);
		}
		if(type==2) {
			cin>>x;
			n = arr.size();
			cout<<n<<endl;
			for(int i=0; i<n; i++) {
				if(arr[i]==x) {
					swap(arr[i],arr[n-1]);
					print(arr);
					arr.pop_back();
					print(arr);
					break;
				}
			}
		}
		q--;
	}
	
}