#include<iostream>
using namespace std;
int main() {
	int arr[100],k,n,count;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cout<<"\n";
	cin>>k;
	/*
	1 2 1 3 4 2 3
	3 4 4 3
	*/
	int l=0;
	while(l<n-k+1) {
		count = 0;
		for(int j=l; j<l+k; j++) {
			int h;
			for(h=j; h<j+k; h++) {
				if(arr[h]==arr[j])
					break;
			}
			if(h==j)
				count++;

					cout<<count<<" ";

		}
		
		l=l+1;
	}
	
}