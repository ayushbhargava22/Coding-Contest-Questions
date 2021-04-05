#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    int r,o,c;
    cin>>r>>o>>c;
    int remOvers = 20-o;
    int remRuns = r-c;
    
    int remBalls = remOvers*6;
    if(remBalls * 6 > remRuns) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}