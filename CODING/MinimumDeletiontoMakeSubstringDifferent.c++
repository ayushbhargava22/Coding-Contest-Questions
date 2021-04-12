#include<bits/stdc++.h>
using namespace std;

int solve() {
	string s;
	cin>>s;
	set<char> st;
	for(int i=0;i<s.size();i++) {
		st.insert(s[i]);
	}
	cout<<s.size()-st.size()<<endl;
	
}

int main() {
	solve();
}