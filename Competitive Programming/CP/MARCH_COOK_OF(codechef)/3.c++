#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{   
    int t;
            cin>>t;
            vector<int> v;
            for(int i = 1; i <= 1000; i++)
            v.push_back(i*i);
            while(t--){
                for(auto x : v){
                    cout<<x<<endl;
                    int q;
                    cin>>q;
                    if(q== 0) continue;
                    else  if(q == 1 || q == -1)
                    break;
                }
                
            }
        
            return 0;
}