#include <bits/stdc++.h>

using namespace std;


int subset(int a[],int n,int sum) {
        int sum=0;
        for(int i=0;i<n;i++) {
            sum=sum+a[i];
        }
        if(sum%2!=0) return 0;
        else {
            int req=sum/2;
            bool dp[n+1][req+1];
            for(int i=0;i<=n;i++) {
                dp[i][0] = true;
            }
            for(int j=1;j<=req;j++) {
                dp[0][j] = false;
            }
            
            for(int i=1;i<=n;i++) {
                for(int j=1;j<=req;j++) {
                    if(a[i-1] > j) {
                        dp[i][j] = dp[i-1][j];
                    } else {
                        dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i-1]];
                    }
                }
            }
            
            if(dp[n][req] == true) return 1;
            else return 0;
        }
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            sum+a[i];
        }
        
    
        cout<<subset(a,n,sum);
    }
   
    return 0;
}