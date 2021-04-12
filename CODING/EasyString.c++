#include<bits/stdc++.h>
using namespace std;

int solve() {
	string s;
	cin>>s;
	string str="";
	for(int i=0;i<s.size();i++) {
		if(s[i] >= 97 && s[i] <=123) {
			str.push_back(s[i]);
		} else {
			str.push_back(s[i]+32);
		}
	}

	int cnt=1;
	for(int i=0;i<str.size();i++) {
		cnt=1;
		while(str[i] == str[i+1]) {
			i++;
			cnt++;
		} 
		cout<<cnt<<str[i];
	}
	cout<<endl;
}

int main() {
	solve();
}