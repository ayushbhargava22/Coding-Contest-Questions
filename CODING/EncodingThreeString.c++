#include<bits/stdc++.h>
using namespace std;


int solve() {
	int n;
	cin>>n;
	string first;
	string middle;
	string last;
	for(int i=0;i<n;i++) {
		string s;
		cin>>s;
		if(s.size()%3 == 0) {
			int sizeL = s.size()/3;
			int i=0;
			int flag=1;
			int cnt=0;
			while(i !=s.size()) {
				if(flag==1) {
					first.push_back(s[i]);
					i++;
					cnt++;
					if(cnt == s.size()/3) {
						flag=2;
						cnt=0;
					}
				} 
				if(flag==2) {
					middle.push_back(s[i]);
					i++;
					cnt++;
					if(cnt == s.size()/3) {
						flag=3;
						cnt=0;
					}
				} 
				if(flag==3) {
					last.push_back(s[i]);
					i++;
					cnt++;
					if(cnt == s.size()/3) {
						flag=4;
						cnt=0;
					}
				} 
			}
		}
		else if(s.size() % 2 == 0) {
			int mid=s.size()/2;
			middle.push_back(s[mid-1]);
			middle.push_back(s[mid]);
			for(int i=0;i<mid-1;i++) {
				first.push_back(s[i]);
			}for(int i=s.size()-1;i>mid+1;i--) {
				last.push_back(s[i]);
			}
		}
	}
	cout<<first<<" "<<middle<<" "<<last;
}

int main() {
	solve();
}