#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int solve() {
	ll n,d;
	cin>>n>>d;
	ll a[n];
	for(ll i=0;i<n;i++) {
		cin>>a[i];
	}

	ll cnt=0;
	for(ll i=0;i<n;i++) {
		for(ll j=0;j<n;j++) {
			if(i!=j && abs(a[i]-a[j])<=d) {
				cnt++;
			}	
		}
	}
	cout<<cnt;
}

int main() {
	solve();
	
	return 0;
}