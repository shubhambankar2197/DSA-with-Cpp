#include<bits/stdc++.h>
using namespace std;

long long int Vaccine(char vaccine[], int l, unordered_map<char,int> virus) {
	unordered_map<char,int> vacc;
	//for the vaccine
	for(int i=0; i<l; i++) {
		vacc[vaccine[i]]++;
		// cout<<v[i];
	}

	std::unordered_map<char, int>::iterator vir = virus.begin();
	std::unordered_map<char, int>::iterator vacci = vacc.begin();

	int temp1,temp2,temp3,temp4,result;

// 	//for the virus
	vir = virus.find('G');
	if(vir==virus.end()) {
		temp1=0;
	}
	else{
		temp1 = vir->second;
	}


	vir = virus.find('C');
	if(vir==virus.end()) {
		temp2=0;
	}
	else{
		temp2 = vir->second;
	}

// //for the vaccine
	vacci = vacc.find('G');
	if(vacci==vacc.end()) {
		temp3=0;
	}
	else{
		temp3 = vacci->second;
	}


	vacci = vacc.find('C');
	if(vacci==vacc.end()) {
		temp4=0;
	}
	else{
		temp4 = vacci->second;
	}

	result = (temp1*temp4) + (temp2*temp3);
	return result;


}

int main() {
	int n,m,l;
	cin>>n>>m;
	long long int res,max=0,index;
	char virus[n],vaccine[1000];
	for(int i=0; i<m; i++) {
		cin>>virus[i];
	}

	unordered_map<char,int> mp;

	for(int i=0; i<m; i++) {
		mp[virus[i]]++;
	}
	int k=1;
	while(k<=n) {
		cin>>l;
		for(int i=0; i<l; i++) {
			cin>>vaccine[i];
		}
		res = Vaccine(vaccine,l,mp);
		if(res>max) {
			max = res;
			index = k;
		}
		
		k++;
	}
	cout<<index<<"\n";
}
