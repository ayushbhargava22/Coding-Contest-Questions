#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        
        int sum1=0;
        int i=0,j=n-1;
        while(i<n/2) {
            sum1 = sum1 + abs(a[i]-a[j]);
            i++;
            j--;
        }
        int flag=0;
        for(int k=2 ; k <= sum1/2 ; k++) {
          if(sum1%k == 0) {
             flag = 1;
             break;
          }
       }
       //cout<<sum1<<" "<<flag<<endl;
       if(flag == 0 && sum1!=0 && sum1!=1 ) cout<<"KIT"<<endl;
       else if(flag == 1 && sum1!=0 && sum1!=1) cout<<"KAT"<<endl;
       else if(sum1 ==0 || sum1==1) cout<<"KITKAT"<<endl;
       
    }
    return 0;
}