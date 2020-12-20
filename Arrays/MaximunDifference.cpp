#include<bits/stdc++.h>
using namespace std;
/*
Input  : arr[] = {2, 4, 8, 7, 7, 9, 3}
Output : 4
Left smaller   LS[] = {0, 2, 4, 4, 4, 7, 2}
Right smaller  RS[] = {0, 3, 7, 3, 3, 3, 0}
Maximum Diff of abs(LS[i] - RS[i]) = 7 - 3 = 4 

*/
void maxDiff(int *A, int n){
	stack<int> s;
	vector<int> arr,arr1;
    int min=999,x;
    s.push(0);
    arr.push_back(0);
    for(int i=1; i<n; i++) {
    	if(A[i] > A[i-1]) {
    		s.push(A[i-1]);
    		arr.push_back(s.top());
    	}

    	if(A[i] <= A[i-1]) {
    		while(A[i] <= s.top()) {
    			s.pop();
    		}
    		arr.push_back(s.top());
    	}
    }

    while(!s.empty()) {
    	s.pop();
    }

    s.push(0);
    arr1.push_back(0);
    for(int i=n-2; i>=0; i--) {
    	if(A[i] > A[i+1]) {
    		s.push(A[i+1]);
    		arr1.push_back(s.top());
    	}

    	if(A[i] <= A[i+1]) {
    		while(A[i] <= s.top()) {
    			s.pop();
    		}
    		arr1.push_back(s.top());
    	}
    }

    reverse(arr1.begin(), arr1.end());
    int temp,max=0;
    for(int i=0; i<n; i++) {
    	temp = abs(arr[i] - arr1[i]);
    	if(temp > max) {
    		max = temp;
    	}
    }
    cout<<max;



}

int main() {
	int t,n,A[1000];
	cin>>t;
	while(t>0){
		cin>>n;
		for(int i=0; i<n; i++) {
			cin>>A[i];
		}
		maxDiff(A,n);
		t--;
	}
}