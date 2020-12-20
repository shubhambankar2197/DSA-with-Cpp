#include<iostream>
using namespace std;
void beaker (int n, int k) {
	static int count=1;
	static int day = 1;
	int temp;
	if(k<=n) {
		while(count<=k) {
			day++;
			count = count << 1;
		}
		cout<<day<<" "<<count;
	}

	if(k>=n) {
		day++;
		count = n;
		day++;
		count = count + 1;
		while(count<=k) {
			day++;
			count = count << 1;
		}
				cout<<day<<" "<<count;

	}

}


int main() {
	int testCases, n, k;
	
	cin>>testCases;
	while(testCases>0) {
		cin>>n>>k;
		beaker(n,k);
		testCases--;
	}
	return 0;
}