#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{  
    int t;
    cin>>t;
    while(t--) {
        int n,m,k;
        cin>>n>>m>>k;
        int a[n][m];
        vector<int> arr;
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++) {
                a[i][j] = k + i + j;
                arr.push_back(a[i][j]);
            }
        }
        
        int num=arr[0];
        for(int i=1;i<arr.size();i++) {
            num = num ^ arr[i];
        }
        cout<<num;
        cout<<endl;
        
    }
   
    return 0;
}