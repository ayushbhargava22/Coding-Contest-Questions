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
        for(int i=1;i<=n;i++) {
            cin>>a[i];
        }
        ll even=0,odd=0;
        ll evenno=0,oddno=0;
        for(int i=1;i<=n;i++) {
            if(i%2==0) even++;
            else odd++;
            
            if(a[i]%2==0) evenno++;
            else oddno++;
        }
        // cout<<even<<" "<<odd<<endl;
        // cout<<evenno<<" "<<oddno<<endl;
        if(evenno==even && oddno==odd) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}