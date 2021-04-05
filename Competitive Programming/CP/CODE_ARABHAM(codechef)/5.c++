#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        float sgpa;
        float sum=0;
        for(int i=0;i<n;i++) {
            if(a[i]==100) sum = sum + 10;
            if(a[i] == 99) sum = sum + 9;
            if(a[i] == 98) sum =sum + 8;
            if(a[i]==97) sum= sum + 7;
            if(a[i] == 96) sum=sum+6;
            if(a[i]>=57&&a[i]<=95) sum= sum + 5;
            if(a[i] >= 35 && a[i]<=56) sum=sum + 4;
        }
        sgpa = sum/n;
        cout<<sgpa<<endl;
    }
    return 0;
}

