#include<bits/stdc++.h>
using namespace std;

int solve() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}

	int num;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i] > a[j]) {
				num = a[i];
				a[i] = a[j];
				a[j] = num;
			}
		}
	}

	cout<<a[n-1]*a[n-2];
}

int main() {
	solve();
}