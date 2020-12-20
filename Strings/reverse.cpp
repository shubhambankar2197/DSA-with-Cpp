#include<bits/stdc++.h>
using namespace std;



void reverseS(char *str) {
	int i=0,k=0;
	while(str[i]!='\0'&& str[k]!='\0') {
		if(str[i]!=' ') {
			k = i;
			while(str[k]!=' ' && str[k]!='\0') {
				k++;
			}
			int j = k-1;
			while(i<j) {
				char temp = str[i];
				str[i] = str[j];
				str[j] = temp;
				i++;
				j--;
			}

		}
		i = k;
		if(str[i]==' ') {
			k = i;
			cout<<k<<"\n";
			while(str[k]==' '  && str[k]!='\0') {
				k++;
			}
		}
		i = k;
	}

	for(int i=0; str[i]!='\0'; i++) {
		cout<<str[i];
	}
}


int main() {
	char str[] = "H  ello  Wor ld";
	reverseS(str);
}