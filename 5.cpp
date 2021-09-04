#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
typedef long double ld;

int main()
{
	ll n,flag=0;
	cout<<"Enter a number to check prime ";
	cin>>n;
	
	for(int i=2;i<=n/2;i++)
	{
		if(n % i == 0)  
      	{  
          cout<<n<<" is not Prime"<<endl;  
          flag=1;  
          break;  
      	}  
	}
	
	
	if (flag==0)  
     cout <<n<<" is Prime"<<endl;  
	
	
	return 0;
}
