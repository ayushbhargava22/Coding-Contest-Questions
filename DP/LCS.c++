#include <bits/stdc++.h>

using namespace std;


int subset(string s1,string s2, int n,int m) {
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=m;j++) {
            if(i==0 || j==0) {
                dp[i][j] =0;
            }
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) {
            if(s1[i-1]==s2[j-1]) {
                dp[i][j] = 1+dp[i-1][j-1];
            } else {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    
    cout<<dp[n][m]<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        string s1,s2;
        cin>>s1>>s2;
        // int n;
        // cin>>n;
        // int a[n];
        // int sum=0;
        // for(int i=0;i<n;i++) {
        //     cin>>a[i];
        //     sum+a[i];
        // }
        subset(s1,s2,s1.size(),s2.size());
    }
   
    return 0;
}