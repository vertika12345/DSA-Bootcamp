#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
typedef long double ld;
 

int main() {
	ll a,b;
	cout<<"Enter numbers: ";
	cin>>a>>b;
	
	cout<<"Before swapping: ";
	cout<<"a="<<a<<" b="<<b;
	
	ll temp=a;
	a=b;
	b=temp;
	
	cout<<"\nAfter swapping: ";
	cout<<"a="<<a<<" b="<<b;
	
    return 0;
 
}
