#include<iostream>
using namespace std;
int greatestOddDivisor(int i) {
	
	while(i%2==0) {
		i = i / 2;
	}
			return i;

	
}

int main() {
	int testCase, temp;
	unsigned long long int n , m, sum,sum2;
	cin>>testCase;
	while(testCase > 0) {
		int i=2;
		sum = 0;
		cin>>n>>m;
		while(i<=n) {
			temp =  greatestOddDivisor(i);
			sum = sum + temp;
			i = i + 2;
		}

		if(n==1) {
			sum2 = n;
		}
		else{
			int k = (n+1)/2;
			sum2 = k*k;
			cout<<"sum2="<<sum2<<" ";
		}
		
			cout<<"sum2="<<sum2<<" ";

		sum = sum + sum2;
		cout<<"sum = "<<sum<<"\n";
		cout<<sum%m<<"\n";
		testCase--;
	}
}