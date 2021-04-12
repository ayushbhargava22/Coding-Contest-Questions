#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--) {
        ll u,v,a,s;
        cin>>u>>v>>a>>s;
        
        if(u<=v) cout<<"Yes"<<endl;
        else {
            if(u*u-v*v<=2*a*s) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
   
    return 0;
}