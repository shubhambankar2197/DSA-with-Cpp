#include<iostream>
using namespace std;
void beaker (int n, int k) {
	int beaker2=1;
	int day = 0;
	int temp,count=1;
	int beaker1=0;


	if(k<n) {

		while(beaker2 <= k) {
			day++;
			beaker2 = beaker2 << 1;
		}
		cout<<day;
	}

	else {
		while(count <= k) {
			while(beaker2 <= n) {
				day++;
				count = beaker2;
				beaker2 = beaker2 << 1;
							//cout<<day<<" "<<count<<endl;

			}
			// count = beaker1 + (beaker2 >> 1); //beaker1 = n; beaker2 = 1; count = beaker1 + beaker2; 
			// beaker1 = n;
			// beaker2 = 1;
			beaker1 = n;
			beaker2 = 0;
			count = beaker2 + beaker1;
			count = count << 1;
		}
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