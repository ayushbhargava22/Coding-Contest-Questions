#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int maxNo=INT_MIN;
        char str;
        for(int i=0;i<s.size();i++) {
            int cnt=1;
            while(s[i] == s[i+1]) {
                cnt++;
                i++;
            } 
            if(cnt > maxNo) {
                maxNo = cnt;
                str= s[i];
            }
        }
        cout<<maxNo<<" "<<str<<endl;
    }
   
    return 0;
}