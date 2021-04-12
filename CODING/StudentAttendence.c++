#include<bits/stdc++.h>
using namespace std;

int solve(string s) {
	int cntA=0;
	int cntL=0;
	for(int i=0;i<s.size();i++) {
		if(s[i] == 'A') {
			cntA++;
		}
		if(s[i] == 'L') {
			cntL++;
		}
		if(s[i] != 'L') {
			cntL=0;
		}
		if(cntL>=3) {
			return false;
		}
	}

	if(cntA>=2) return false;
	else return true;
}

int main() {
	string s;
	cin>>s;
	if(solve(s) == true) {
		cout<<"true"<<endl;
	} else {
		cout<<"false"<<endl;
	}
}