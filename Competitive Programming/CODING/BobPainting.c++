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
	while(alice > bob) {
		alice -= a[i];
		bob += a[i];
		i++;
		cnt++;
	}
	// cout<<bob<<" "<<alice;
	cout<<cnt<<endl;
}

int main() {
	solve();
}