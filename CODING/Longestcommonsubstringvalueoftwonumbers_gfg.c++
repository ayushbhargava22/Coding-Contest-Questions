#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(string s) {
	int n=s.size();
    int k=1;long long sum=0;
    while(n)
    {
        sum=sum+(long long)(k*(s[n-1]-'0'));
        k=k*2;
        n--;
    }
    return sum;
}

string decimalToBinary(long long int n) {
	string s;
    while(n)
    {
        s+=to_string(n%2);
        n=n/2;
    }
    reverse(s.begin(),s.end());
    return s;
}

int lcs(string s1,string s2,int n,int m) {
	int dp[n+1][m+1];

	for(int i=0;i<=n;i++) {
		for(int j=0;j<=m;j++) {
			if(i==0 || j==0) {
			    dp[i][j] = 0;
			}
		}
	}

	int maxSize=0;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++) {
			if(s1[i-1] == s2[j-1]) {
				dp[i][j] = 1 + dp[i-1][j-1];
				maxSize = max(maxSize, dp[i][j]);
			} else {
				dp[i][j] = 0;
			}
		}
	}
	//cout<<"max :: "<<maxSize<<endl;
	long long int z=0;long long int h=0;
    int x,y;
    string ans;
    for(int i=0;i<=n;i++)
    for(int j=0;j<=m;j++)
    {
        if(maxSize==dp[i][j])
        {
            ans=s1.substr(i-maxSize,maxSize);
            z=binaryToDecimal(ans);
            if(h<z)
            h=z;
        }
    }
    return h;
}

int solve() {
	int n,m;
	cin>>n>>m;

	string s1 = decimalToBinary(n);
	string s2 = decimalToBinary(m);
	// string s1,s2;
	// cin>>s1>>s2;
	int res = lcs(s1,s2,s1.size(),s2.size());
	cout<<res<<endl;
	
}

int main() {
	solve();

	return 0;
}