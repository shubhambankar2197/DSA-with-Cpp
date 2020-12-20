    #include <iostream>
    using namespace std;
    typedef long long ll;
    int main()
    {   
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n,m;
        cin>>n>>m;
        int cnt[m]={0};
        for(int i=0;i<m;i++){
            cnt[i]=0;
        }
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            cnt[x%m]++;
        }
        ll ans=0;
        int i,k,j,t;
        //all distinct triplet with sum of m
        i=0;k=m-1;
        while(i<k){
            j=i+1;t=k;
            while(j<t){
            	cout<<"i,j,t = "<<i<<j<<t<<" ";
                ans += (cnt[i]*cnt[j]*cnt[t]);
                cout<<"dis "<<ans<<"\n";
                j++;t--;
            }
            i++;
            k-=2;
        }
        //all distinct triplet with sum of 2*m
        i=m-1;k=3;
        while(i>k){
            j=i-1;t=k;
            while(j>t){
            	cout<<"i,j,t = "<<i<<j<<t<<" ";
                ans += (cnt[i]*cnt[j]*cnt[t]);
                cout<<"sum 2m "<<ans<<"\n";
                j--;t++;
            }
            i--;k+=2;
        }
        //if m is divisible by 3
        if(m%3==0){
        	cout<<" m/3  "<<cnt[m/3]-2<<" ";
            ans+=(cnt[m/3]*(cnt[m/3]-1)*(cnt[m/3]-2))/6;
            cout<<" div by 3 "<<ans<<"\n";
            cout<<"m/3  "<<cnt[2*m/3]<<" ";
            ans+=(cnt[2*m/3]*(cnt[2*m/3]-1)*(cnt[2*m/3]-2))/6;
            cout<<"div by 3  "<<ans<<"\n";
        }
        ans+=(cnt[0]*(cnt[0]-1)*(cnt[0]-2))/6;
        cout<<"0 rem "<<ans<<"\n";
        //only two numbers are same
        for(i=1;i<m;i++){
            k=(2*m-2*i)%m;
            cout<<"k = "<<k<<" ";
            if(k==i) continue;            
            ans+=((cnt[i]*(cnt[i]-1))*cnt[k])/2;
            cout<<"2 nos same "<<ans<<"\n";
        }
        cout<<ans<<"\n";
        return 0;
    }