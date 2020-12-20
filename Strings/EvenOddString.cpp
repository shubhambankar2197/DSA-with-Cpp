#include<bits/stdc++.h>
using namespace std;

// long long int printNcR(long long int n, long long int r) 
// { 

//     long long p = 1, k = 1; 

//     if (n - r < r) 
//         r = n - r; 
  
//     if (r != 0) { 
//         while (r) { 
//             p *= n; 
//             k *= r; 
//             long long m = __gcd(p, k); 
//             p /= m; 
//             k /= m; 
  
//             n--; 
//             r--; 
//         } 

//     } 
  
//     else {p = 1;}


//     return p; 
  
// } 

long long int power(long long int x, long long int y, long long int p)  
{  
    int res = 1;     
  
    x = x % p; 
    if (x == 0) return 0; 
  
    while (y > 0)  
    {  
        if (y & 1)  
            res = (res*x) % p;  
  

        y = y>>1; 
        x = (x*x) % p;  
    }  
    return res;  
}  

int main() {
	long long int testCases, noOfeven, noOfodd;
	long long int total_length,x=2,even,odd,temp=1000000007;
	cin>>testCases;
	while(testCases>0) {
		cin>>noOfeven>>noOfodd;
		even = power(x,noOfeven,temp) - 1;
		odd = power(x,noOfodd-1,temp) - 1;

		// cout<<even<<" "<<odd<<" ";
		total_length = (((even%temp * odd%temp)%temp) + (even%temp + odd%temp)%temp)%temp;
		cout<<total_length<<"\n";
		testCases--;
	}
}