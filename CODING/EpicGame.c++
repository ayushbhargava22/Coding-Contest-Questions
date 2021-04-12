#include<bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2) {
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}

int solve() {
  int a,b,n;
  cin>>a>>b>>n;

  int flag=0,cnt=0;
  while(flag==0) {
    if(gcd(a,n) > n) {
      flag = 1;
    } else {
      cnt++;
      flag=0;
      n-=gcd(a,n);
    }

    if(gcd(b,n) > n) {
      flag=1;
    } else {
      cnt++;
      flag=0;
      n-=gcd(b,n);
    }
  }

  if(cnt%2==0) cout<<"1"<<endl;
  else cout<<"0"<<endl;
}

int main() {
  solve();
}