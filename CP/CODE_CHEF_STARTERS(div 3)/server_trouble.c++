#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        ll n,k;
        cin>>n>>k;
        ll d=ceil(float(n)/float(k));
        int rem=n%k;
        if(rem==0)
        {
            cout<<d<<" "<<k<<endl;
        }
        else
        {
            cout<<d<<" "<<rem<<endl;
        }
    }
	return 0;
}
