#include <iostream>
using namespace std;
int bitset(int n) {
	if(n<0) {
		return -1;
	}
	else {
		int temp = n;
		int temp2;
		static int count=0;
		while(temp>0) {
			temp2 = temp%2;
			if(temp2==1)
				count++;

			temp=temp/2;
		}
		n=n-1;
		bitset(n);
		return count;

	}
	
}


int main() {
	int n,n1;
	cin>>n;
	n1=bitset(n);
	cout<<n1;
}