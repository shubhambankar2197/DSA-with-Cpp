#include<bits/stdc++.h>
using namespace std;

void xsquare(long long int *a, long long int *b, long long int x, long long int y, long long int n, long long int z) {
    long long int result;
    if(z==1) {
        result=0;
        for(long long int i=x; i<=y; i=i+2) {
            result = result +  a[i];
        }   

        for(long long int j=x+1; j<=y; j=j+2) {
            result = result +  b[j];
        }
        cout<<result<<"\n";
    }
        if(z==2) {
            result=0;
            for(long long int i=x+1; i<=y; i=i+2) {
            result = result +  a[i];
        }   

        for(long long int j=x; j<=y; j=j+2) {
            result = result +  b[j];
        }
        cout<<result<<"\n";
        }
}

int main() {
    long long int n,q,x,y,z;
    cin>>n>>q;
    long long int a[n],b[n];
    for(long long int i=1; i<=n; i++) {
            cin>>a[i];
        }

         for(long long int i=1; i<=n; i++) {
            cin>>b[i];

        }
    while(q>0) {
        

        cin>>z>>x>>y;
        xsquare(a,b,x,y,n,z);
        q--;
    }
}

