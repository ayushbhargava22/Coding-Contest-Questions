#include <bits/stdc++.h>

using namespace std;

int mult(long long int n) {
   
    if (n != 1)
        return n * mult(n - 1);
    else
        return n;
}

int main()
{
    long long int t;
    cin>>t;
    while(t--) {
        long long int x;
        cin>>x;
        cout<<mult(x)<<endl;
    }
   
    return 0;
}