#include <bits/stdc++.h>
#define ll long long int;

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,x;
        cin>>n>>x;
        int s,r;
        int maxRating = 0;
        for(int i=0;i<n;i++) {
            cin>>s>>r;
            if(x>=s) {
                maxRating = max(maxRating,r);
            }
        }
        cout<<maxRating<<endl;
    }
   
    return 0;
}