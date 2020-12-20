#include<bits/stdc++.h>
using namespace std;

int solution(std::vector<int> &A) {
	int i=0,max=-999,temp;
	sort(A.begin(), A.end());
	while(i<A.size()) {
		if(A[i] > max) {
			max= A[i];
		}
		i++;
	}
	// int diff = A[0] - 0;
	// for(int j=1; j<A.size(); j++) {
		
	// 		if(A[j] != A[j-1]) {
	// 			if(abs((A[j] - i)) !=diff) {

	// 			}
	// 		}
		
	// }

	if(max < 0) {
		return 1;
	}
	else{
		int b[max] = {0};
		int j=0,k=0;
		for(j=0; j<A.size(); j++) {
			if(A[j] > 0) {
				b[A[j]%max] = 1;
			}
			
		}

		for(k=0; k<max; k++) {
			if(b[k]==0) {
				temp = k;
				break;
			}
		}
		if(k==max) {
			temp = A[arr.size()-1] + 1;
		}

		return temp;
	}
	


}


int main() {
	std::vector<int> arr;
	int n,x,res;
	cin>>n;
	while(n>0) {
		cin>>x;
		arr.push_back(x);
		n--;
	}
	res = solution(arr);
	cout<<res;
}