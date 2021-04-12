#include<bits/stdc++.h>
using namespace std;

int solve() {
	int l;
	cin>>l;
	int m = l*2;
	int a[m];
	for(int i=0;i<m;i++) {
		cin>>a[i];
	}

	int sum=0;
	for(int i=0;i<m;i=i+2) {
		sum=sum + (abs(a[i]-a[i+1])) ;
		if(a[i+2] < a[i+1]) {
			sum= sum - (a[i+1]-a[i+2]);
		} 
		if(a[i+2]<a[i]) {
			sum+=(a[i]-a[i+1]);
		}
	}
	cout<<sum<<endl;
}

int main() {
	solve();
}