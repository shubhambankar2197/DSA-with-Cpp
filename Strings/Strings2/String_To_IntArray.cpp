#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	string str("10+200+3000");
	int arr[str.length()] = {0};
	int i=0,j=0,sum=0;
	while(str[i]!='\0') {
		if(str[i]=='+')
			j++;
		else
			arr[j] = arr[j]*10+(str[i]-48);

		i++;
	}

	for(int k=0; k<=j; k++) {
		sum = sum + arr[k];
	}
	cout<<sum;
}