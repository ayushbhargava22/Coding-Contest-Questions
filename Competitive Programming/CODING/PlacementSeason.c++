#include<bits/stdc++.h>
using namespace std;

int solve() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}

	std::vector<int> v;
	for(int i=n-1;i>=0;i--) {
		int cnt=0;
		for(int j=0;j<i;j++) {
			if(a[j] > a[i]) {
				cnt++;
			}
		}
		v.push_back(cnt);
	}

	for(int i=n-1;i>=0;i--) {
		cout<<v[i]<<" ";
	}
}

int main() {
	solve();
}