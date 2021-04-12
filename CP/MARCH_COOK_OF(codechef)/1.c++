#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{   
    //q1
    
    ll t;
    cin>>t;
    while(t--) {
        int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;
        int maxWeight = x2*m;
        int minWeight = x1*m;
        int diff = w2-w1;
        if(diff >= minWeight && diff <= maxWeight) {
            cout<<"1"<<endl;
        }
        else {
            cout<<"0"<<endl;
        }
    }
    
   
   
    return 0;
}