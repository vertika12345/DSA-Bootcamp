#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
typedef long double ld;
 

int main() {
string s;
cin>>s;
int count=1;
int j;

for(int i=0;i<s.size();i++){
   if(s[i]>=60 && s[i]<=95){
       count++;
   }
}
cout<<count<<endl;
    return 0;
 
}
