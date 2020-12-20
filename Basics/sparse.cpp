#include <iostream>
using namespace std;
int binary(int n) {
	int stack[100],i=0;
	int temp;
	while(n!=0) {
		temp  = n % 2;
		stack[++i] = temp;
		n = n / 2;
	}
		int x,y,flag=0;
		for(int j=i; j>=1; ) {
			x = stack[j];
			y = stack[--j];
			if(x==y) {
				flag=1;
			}
		}
		if(flag==1) {
			cout<<"yes";
		}	
		else {
			cout<<"no";
		}
}




int main() {
	int a;
	cin>>a;
	binary(a);
	// print(stack);

}
