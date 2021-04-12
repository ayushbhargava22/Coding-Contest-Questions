#include<bits/stdc++.h>
using namespace std;

int solve() {
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
		b[i]=a[i];
	}
	bool e1=false,e2=false,e3=false;
	int r1,r2,r3;
	
	sort(a,a+n);
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			for (int k=j+1;k<n;k++){
				if (a[k]==a[i]+a[j]){
					for (int y=0;y<n;y++){
						if (e1==0&&b[y]==a[k]){
							r1=y+1;
							e1=1;
						}
						else if (e2==0&&b[y]==a[i]){
							r2=y+1;
							e2=1;
						}
						else if (e3==0&&b[y]==a[j]){
							r3=y+1;
							e3=1;
						}
					}
					cout<<r1<<" "<<r2<<" "<<r3;
					return 0;
				}
			}
		}
	}
	cout<<-1;
	return 0;
}

int main() {
	solve();
	return 0;
}