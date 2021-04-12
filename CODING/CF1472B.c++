#include<bits/stdc++.h>
using namespace std;

int solve() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		int cnt2=0;
		int cnt1=0;
		for(int i=0;i<n;i++) {
			cin>>a[i];
			if(a[i] == 2) cnt2++;
			else cnt1++;
		}

		if(cnt2%2!=0 && cnt1%2!=0) {
			cout<<"NO"<<endl;
		} else if(cnt2%2==0 && cnt1%2==0) {
			cout<<"YES"<<endl;
		} else {
			cout<<"YES"<<endl;
		}
	}
}

int main() {
	solve();
}