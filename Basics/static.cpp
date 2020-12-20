#include <iostream>
using namespace std;
int b(int);
int main() {
	int a = 2147483647,c;
	cout<<a<<endl;
	a=a+2;
	cout<<a<<endl;
	b(a);

	{
		c=a*2;
		cout<<c<<endl;
	}
}

int b(int a) {
	a--;
	cout<<a<<endl;
}