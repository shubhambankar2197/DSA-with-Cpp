#include<bits/stdc++.h>
using namespace std;
//Time consuming.
void print(priority_queue<unsigned long long int, vector<unsigned long long int>, greater<unsigned long long int>> pq) {
	while(!pq.empty()) {
		cout<<pq.top()<<" ";
		pq.pop();
	}
}


unsigned long long int square(long int n) {

    // Base case 
    if (n==0) return 0; 
  
    // Handle negative number 
    if (n < 0) n = -n; 
  
    // Get floor(n/2) using right shift 
    int x = n>>1; 
  
    // If n is odd 
    if (n&1) 
        return ((square(x)<<2) + (x<<2) + 1); 
    else // If n is even 
        return (square(x)<<2); 
} 



void nearestHostel(priority_queue<unsigned long long int, vector<unsigned long long int>, greater<unsigned long long int>> pq, long long int k) {
    while((k-1)>0 && !pq.empty()) {
        pq.pop();
      	k--;
    }
    cout<<pq.top()<<endl;
}


int main() {
    long q,k;
    cin>>q>>k;
    long int x,y;
    char z;
    priority_queue<unsigned long long int, vector<unsigned  long long int>, greater<unsigned long long int>> pq;
    while(q>0) {
    	//cout<<q<<endl;
        cin>>z;
        
        if(z=='1') {
        	cin>>x>>y;
        	//cout<<z<<" "<<x<<" "<<y<<endl;
           	long long int res1,res2,res;
    		res1 = square(x);
    		res2 = square(y);
    		res = res1 + res2;
    		//cout<<res<<endl;
    		pq.push(res);
        }
        if(z=='2') {
            nearestHostel(pq,k);
        }
        q--;
    }
}
