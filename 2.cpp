#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
typedef long double ld;
 

int main() {
int a,b,c;
cin>>a>>b>>c;
if(a>=b){
    if(a>=c){
        cout<<a<<endl;
    }
    else {
        cout<<c<<endl;
    }
}
else {
    if(b>=c){
        cout<<b<<endl;
    }
    else {
        cout<<c<<endl;
    }
}
    return 0;
 
} 
