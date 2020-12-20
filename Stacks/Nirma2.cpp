#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void nirma(std::vector<int> v) {
	// int i=0,j=1,len=v.size();
	// std::vector<int> r;
	// int temp,max;
	// while(i<len-1 && j<=len) {
	// 	temp = v[i] | v[j];
	// 	if(r.empty()) {
	// 		max = temp;
	// 		r.push_back(temp);
	// 	}
	// 	if(temp > r[i-1]) {
	// 		max = temp;
	// 		r.push_back(temp);
	// 	}
	// 	i++;
	// 	j++;
	// }
	// cout<<max;
		// sort(v.begin(), v.end());
		vector<int>::iterator i=v.begin()+1;
		vector<int>::iterator j=v.begin()+2;
		// vector<int> r={0};
		stack<int>r;
		// vector<int>::iterator k=r.begin();

		int temp,max=0;
		while(i<v.end() && j<v.end()) {
							cout<<"i="<<*i<<" "<<"j="<<*j<<endl;

			temp = *i | *j;
			cout<<"bitwise OR = "<<temp<<endl;
			if(r.empty()) {	
				// r.push_back(temp);
				r.push(temp);
				max = temp;
			}
				cout<<"i="<<*i<<" "<<"j="<<*j<<endl;
			// cout<<r[k]<<endl;
			if(temp > r.top()) {
				// r.push_back(temp);
				r.push(temp);
				max = temp;
				cout<<"i="<<*i<<" "<<"j="<<*j<<endl;
			}
			// else{
			// 	r.push(temp);
			// }
			// cout<<temp<<" "<<max<<endl;

			i++;
			j++;
		}
		// cout<<k<<endl;
		// vector<int>::iterator m=v.begin();
		// vector<int>::iterator n=v.begin()+2;
		// int l=1;
		// // cout<<r[4];
		// while(n<=v.end()) {
		// 	temp = r[l] | *j;
		// 	// cout<<r[k]<<endl;
		// 	if(temp > r[k]) {
		// 		r.push_back(temp);
		// 		max = temp;
		// 	}
		// 	else{
		// 		r.push_back(temp);
		// 	}
		// 	cout<<temp<<" "<<max<<endl;

		// 	// m++;
		// 	n++;
		// 	k++;
		// 	l++;
		// }

		cout<<max<<endl;
}

int main() {
	int testCase,n,x;
	cin>>testCase;
	while(testCase>0) {
			vector<int> v={0};

		cin>>n;
		for(int i=0; i<n; i++) {
			cin>>x;
			v.push_back(x);
		}
		
		testCase--;
		nirma(v);
	}
		return 0;
}
	
	// }


// 1 2 3 4
// 7