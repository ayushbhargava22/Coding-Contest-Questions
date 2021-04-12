#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        int f[n],c[m];
        vector<pair<int, char>> pt;
        for(int i=0;i<n;i++) {
            cin>>f[i];
             pt.push_back({f[i], 'F'});
        }
        for(int i=0;i<m;i++) {
            cin>>c[i];
            pt.push_back({c[i],'C'});
        }
        sort(pt.begin(), pt.end());
        int cnt=0;
        int flag = 0;
        for(int i=0;i<pt.size();i++) {
            if(pt[i].second == 'F' && flag==0) {
                continue;
                flag=0;
            }
            else if(pt[i].second == 'F' && flag == 1) {
                cnt++;
                flag=0;
            }
            
            if(pt[i].second == 'C' && flag == 1) {
                continue;
                flag=1;
            }
            else if(pt[i].second == 'C' && flag == 0) {
                cnt++;
                flag=1;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}