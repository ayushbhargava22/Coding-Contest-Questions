#include<bits/stdc++.h>
using namespace std;

int solve() {
	int n;
	cin>>n;
	int a[n];
	int sum=0,cnt=0;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		sum=sum+a[i];
	} 
	int alice=sum;
	int bob = 0;
	int i=0;
	sort(a,a+n,greater<int>());
	while(bob > alice) {
		bob -= a[i];
		alice += a[i];
		i++;
		cnt++;
	}
	cout<<cnt<<endl;
}

int main() {
	solve();
}