#include <bits/stdc++.h>

using namespace std;


int subset(int a[],int n,int sum) {
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++) {
        dp[i][0] = 1;
    }
    for(int i=1;i<=sum;i++) {
        dp[0][i] = 0;
    }
    
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=sum;j++) {
            if(j < a[i-1]) {
                dp[i][j] = dp[i-1][j];
            } else {
                dp[i][j] = dp[i-1][j] + dp[i][j-a[i-1]];
            }
        }
    }
    cout<<dp[n][sum]<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        
        int sum;
        cin>>sum;
        subset(a,n,sum);
    }
   
    return 0;
}