#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
typedef long double ld;
 

int main() 
{
	ll n;
	cout<<"Enter the size of array ";
	cin>>n;
	ll arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	
	ll largest=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[largest])
		largest=i;
	}
	
	ll secondlargest=-1;
	for (int i = 0; i < n; i++) {
        if (arr[i] != arr[largest])
        {
		    if (secondlargest == -1)
                secondlargest = i;
            else if (arr[i] > arr[secondlargest])
                secondlargest = i;
        }
    }
    
    cout<<"Second largest element is "<<arr[secondlargest];
	return 0;
	
}
