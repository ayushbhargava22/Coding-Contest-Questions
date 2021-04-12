#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		vector<int> res;

		if(k>(n-1)/2) {
			cout<<"-1"<<endl;
			continue;
		} 
			int i=1;
			int j=n;
			
			int limit=k*2+1;
			for(int l=1;i<=n&&limit;l++,limit--) {
				if(l%2==0) {
					cout<<j<<" ";
					j--;
				} else {
					cout<<i<<" ";
					i++;
				}
			}
			for(int l=i;l<j;l++) {
				cout<<l<<" ";
			}
		cout<<endl;
	}
	return 0;
}