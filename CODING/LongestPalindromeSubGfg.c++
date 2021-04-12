#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2,int n,int m) {
	int dp[n+1][m+1];
	for(int i=0;i<=n;i++) {
		for(int j=0;j<=m;j++) {
			if(i==0 || j==0) {
				dp[i][j]=0;
			}
		}
	}

	int row,column,len=0;

	for(int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++) {
			if(s1[i-1] == s2[j-1]) {
				dp[i][j] = 1 + dp[i-1][j-1];
				if(len < dp[i][j]) {
					len = dp[i][j];
					row=i;
					column=j;
				}
			} else {
				dp[i][j] = 0;
			}
		}
	}
	//cout<<s2<<endl;
	//cout<<dp[n][m];
	string res;
	while(dp[row][column] != 0) {
		res.push_back(s1[row- 1]);
		row--;
		column--;
	}
	cout<<res;
}

int solve() {
	string s;
	cin>>s;
	string temp;
	temp=s;
	reverse(temp.begin(), temp.end());
	lcs(s,temp,s.size(),temp.size());
}

int main() {
	solve();
}