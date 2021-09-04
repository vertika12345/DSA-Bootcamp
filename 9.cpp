#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
typedef long double ld;
 

int main() 
{
	int n,grade;
	cin >> n;
		for(int i = 0; i< n; i++)
		{
			cin >> grade;
			if (grade >= 38) 
			{
				int rem = grade % 5;
				if (rem >= 3) 
				grade += 5 - rem;
			}
			cout << grade << endl;
		}			
    return 0;
}	
	

