#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int solve(ll a[],ll n) {
	map<ll,ll> mp;
	for(ll i=0;i<n;i++) {
		if(a[i]!=0) mp[a[i]]++;
	}

	ll flag=0;
	ll cnt=0;
	for(auto i : mp) {
		if(i.second > 2) {
			flag=1;
			break;
		} else if(i.second == 2) {
			cnt++;
		}
	}

	if(flag == 1) {
		return -1;
	} else {
		return cnt;
	}
}

int main() {
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++) {
		cin>>a[i];
	}	
	cout<<solve(a,n);
	return 0;
}