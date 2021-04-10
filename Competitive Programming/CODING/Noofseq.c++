#include <iostream>
#define ll long long int
using namespace std;

int solve(int n) {
	if(n==0||n==1) return 1;

	else return solve(n-1) + (n-1)*solve(n-2);
}

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		
		cout<<solve(n);
	}
	return 0;
}