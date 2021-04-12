#include<bits/stdc++.h>
using namespace std;

int solve() {
	string s;
	cin>>s;
	int cnt=0;
	int maxCnt = INT_MIN;
	int flag=0;
	for(int i=0;i<s.size();i++) {
	    if(s[i] == '1') {
	        cnt++;
	    } else if(s[i] == '0') {
	        for(int j=i+1;j<s.size();j++) {
	            if(s[j] == '1') {
	                flag=1;
	                break;
	            }
	        }
	    }
	    
	    if(flag==1) {
	        cnt=cnt+1;
	        maxCnt = max(maxCnt, cnt);
	        flag=0;
	        cnt=0;
	    } else {
	        maxCnt=max(maxCnt,  cnt);
	        cnt-0;
	    }
	}
	cout<<maxCnt<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
	    solve();
	}
}