#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{   

    //q2
    
    ll t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int n=s.size();
        string temp;
        string pawri = "pawri";
        string ts = "party";
        for(int i=0;i<n;i++) {
            if(s[i]=='p'&&n-i>=5) {
                string t="";
                for(int j=i;j<i+5;j++) {
                    t+=s[j];
                } 
                if(t==ts) {
                    temp+=pawri;
                    i=i+4;
                }
                else 
                    temp+=s[i];
            }
            else {
                temp +=s[i];
            }
        }
        cout<<temp<<endl;
    }
    
   
   
    return 0;
}