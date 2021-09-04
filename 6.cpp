#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
typedef long double ld;
 

int main() {
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int sp=n-i; sp>=1;sp--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
    return 0;
 
}
