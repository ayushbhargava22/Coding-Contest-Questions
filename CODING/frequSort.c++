#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int solve() {
	unordered_map<int ,pair<int,int>> mp;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	for(int i=0;i<n;i++) {
		if(mp.find(a[i])!=mp.end()) {
			mp[a[i]].second++;
		} else {
			mp[a[i]] = make_pair(i,1);
		}
	}

	auto it = mp.begin();

	vector<int,pair<int,int>> p;
	for(it;it!=mp.end();it++) {
		p.push_back(make_pair(it->first,it->second));	
	}
	sort(p.begin(), p.end());
	
}

int main() {
	solve();
	return 0;
}