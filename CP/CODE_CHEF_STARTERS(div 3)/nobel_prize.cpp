#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--) {
        ll n,m;
        cin>>n>>m;
        int a[n];
        
        int arr[m+1] = {0};
        for(int i=0;i<n;i++) {
            cin>>a[i];
            arr[a[i]]++;
        }
        
        int flag=0;
        for(int i=1;i<=m;i++) {
            if(arr[i] == 0) {
                flag=1;
            }
        }
        if(flag==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;        
        
    }
    return 0;
}