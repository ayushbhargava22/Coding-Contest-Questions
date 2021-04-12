#include<bits/stdc++.h>
using namespace std;

int solve() {
	int n;
	cin>>n;
	double r1=0,r2=0,r3=INT_MAX;
	double x[n+1];
	for(int i=0;i<n;i++) {
		cin>>x[i];
		r1=max(r1,x[i]);
	}

	int m;
	cin>>m;
	double y[m+1];
	for(int i=0;i<m;i++) {
		cin>>y[i];
		r2=max(r2,y[i]);
	}

	int k;
	cin>>k;
	double z[k+1];
	for(int i=0;i<k;i++) {
		cin>>z[i];
		r3=min(r3,z[i]);
	}

	int a,b;
	cin>>a>>b;

	double ans=((r1*r1)*(r2*b)/(r2*b+a*r3));
	cout<<setprecision(12)<<fixed<<sqrt(ans)<<endl;

}

int main() {
	solve();
}