#include<bits/stdc++.h>
using namespace std;




// long long int Vaccine(char vaccine[], int l, int noOfG, int noOfC) {
// 	// int vacc[26] = {0};

// 	for(int i=0; i<l; i++) {
// 		if(vaccine[i]=='G') {
// 			vacc[vaccine[i]-'A']++;
// 		}

// 		if(vaccine[i]=='C') {
// 			vacc[vaccine[i]-'A']++;
// 		}
// 	}
// 	long long int result,temp1,temp2;
// 	temp1 = vacc['C' - 'A'] * vir['G' - 'A'];
// 	temp2 = vacc['G' - 'A'] * vir['C' - 'A'];
// 	result = temp1 + temp2;
// 	return result;
// }

int main() {
	int n,m,l;
	cin>>n>>m;
	long long int res,max=0,index;
	char virus[n],vaccine[1000];
	for(int i=0; i<m; i++) {
		cin>>virus[i];
	}

	int noOfG=0,noOfC=0;
	
	for (int i = 0; i < m; ++i)
	{
		if(virus[i]=='G') {
			noOfG++;
		}
		if(virus[i]=='C') {
			noOfC++;
		}
	}
	
	//cout<<noOfC<<" "<<noOfG;

	int k=1;
	while(k<=n) {
		int noOfC1=0,noOfG1=0;
		cin>>l;
		for(int i=0; i<l; i++) {
			cin>>vaccine[i];
		}

		for (int i = 0; i<l; ++i) {
			if(vaccine[i]=='G') {
				noOfG1++;
			}
			if(vaccine[i]=='C') {
				noOfC1++;
			}
		}

			//cout<<noOfC1<<" "<<noOfG1;

		res = (noOfG*noOfC1) + (noOfC*noOfG1);
		if(res>max) {
			max = res;
			index = k;
		}
		
		k++;
	}
	cout<<index<<"\n";
}
