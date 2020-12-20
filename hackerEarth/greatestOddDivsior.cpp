#include<iostream>
using namespace std;
int greatestOddDivisor(int i) {
	int j = i % 2;
	int k;
	if(j!=0) {
		return i;
	}
	else {
		
		k = greatestOddDivisor(i/2);
		return k;
	}
	
	
}

int main(){
	int testCase, temp;
	unsigned long long int n , m, sum;
	cin>>testCase;
	while(testCase > 0) {
		int i=1;
		sum = 0;
		cin>>n>>m;
		while(i<=n) {
			temp =  greatestOddDivisor(i);
			sum = sum + temp;
			i++;
		}
		cout<<"sum = "<<sum<<"\n";
		cout<<sum%m<<"\n";
		testCase--;
	}
} 