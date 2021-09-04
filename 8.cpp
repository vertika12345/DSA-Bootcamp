#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
typedef long double ld;
 

int main() {
  int n,r;
  cin>>n>>r;
  int arr[n];
  int b[n+1];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  for(int i=1;i<=r;i++){
     b[i]=arr[i-1];
  }
  for(int i=r;i<n;i++){
      cout<<arr[i]<<" ";
  }
  for(int i=1;i<=r;i++)
{
cout<<b[i]<<" ";
}  
    return 0;
 
}
