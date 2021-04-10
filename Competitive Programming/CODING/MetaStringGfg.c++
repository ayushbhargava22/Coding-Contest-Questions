#include<bits/stdc++.h>
using namespace std;

int solve() {
	string s1,s2;
	cin>>s1>>s2;
	if(s1==s2) {
		return false;
	} 

	int cnt=0;
	for(int i=0;i<s1.size();i++) {
		if(s1[i] != s2[i]) {
			cnt++;
		}
	}

	if(cnt == 2) return true;
	return false;
}

int main() {
	cout<<solve();
	return 0;
}