#include <bits/stdc++.h>

using namespace std;


int subset(int a[],int n,int sum) {
    bool dp[n+1][sum+1];
    for(int i=0;i<=n;i++) {
        dp[i][0] = true;
    }
    for(int j=1;j<=sum;j++) {
        dp[0][j] = false;
    }
    
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=sum;j++) {
            if(a[i-1] > j) {
                dp[i][j] = dp[i-1][j];
            } else {
                dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i-1]];
            }
        }
    }
    if(dp[n][sum] == true) cout<<"T"<<endl;
    else cout<<"F"<<endl;
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