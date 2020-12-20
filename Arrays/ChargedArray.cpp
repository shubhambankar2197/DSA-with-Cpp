#include<bits/stdc++.h>
using namespace std;

int solve (vector<long long> A) {
   int i=0,n=A.size();
   double count;
   count = pow(2,n-1);
   cout<<count<<"\n";
   long long  temp= 1000000007;
   int sum=0;
   while(i<n) {
    cout<<"A[i]=" <<A[i]<<" ";
       if(A[i]>=count) {
           sum = (sum%temp + A[i]%temp)%temp;
           cout<<sum<<" ";
       }
       i++;
   }
   return sum;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        vector<long long> A(N);
        for(int i_A=0; i_A<N; i_A++)
        {
        	cin >> A[i_A];
        }

        int out_;
        out_ = solve(A);
        cout << out_;
        cout << "\n";
    }
}