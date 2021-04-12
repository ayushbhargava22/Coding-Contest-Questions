#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--) {
        string s1,s2;
        cin>>s1>>s2;
        
        int sum1 = 0,sum2 = 0;
        for(int i=0;i<s1.size();i++) {
            sum1 = sum1 + (s1[i]);
        }
        for(int i=0;i<s2.size();i++) {
            sum2 = sum2 + (s2[i]);
        }
        
        if((sum2-sum1) >= 1 && (sum2-sum1)<=10) cout<<"Rashmi"<<endl;
        else if(sum1==sum2) cout<<"No One"<<endl;
        else cout<<"Mohit"<<endl;
    }
    return 0;
}