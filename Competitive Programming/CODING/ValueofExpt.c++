#include<bits/stdc++.h>
using namespace std;

int minimum(int a[],int n,int i,int x) {
	int mini = INT_MAX;
	for(int j=i;j<i+x;i++) {
		if(a[j] < mini) {
			mini=a[j];
		}
	}
	cout<<mini<<endl;
}

int solve() {
	int x,n;
	cin>>x>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}

	for(int i=0;i<n-x+1;i++) {
		minimum(a,n,i,x);
	}
}

int main() {
	solve();
}