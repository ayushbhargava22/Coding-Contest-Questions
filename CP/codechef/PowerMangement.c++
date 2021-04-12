#include<bits/stdc++.h>
using namespace std;

int solve() {
	int m,n,k;
	cin>>m>>n>>k;
	int num;
	vector<int> p;
	for(int i=0;i<m;i++) {
		cin>>num;
		p.push_back(num);	
	}
	sort(p.begin(),p.end());
	int sum=0;
	for(int i=0;i<k;i++) {
		p[i] = n-p[i];
		sum=sum+p[i];
	}

	cout<<sum<<endl;	
}

int main() {
	solve();
}