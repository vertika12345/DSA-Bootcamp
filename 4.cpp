#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
typedef long double ld;
 

int main() {
int n;
cin>>n;
int f=0;
int s=1;
for(int i=0;i<n;i++){
    int t=s+f;
    f=s;
    s=t;
    cout<<f<<" ";
}
    return 0;
 
}
