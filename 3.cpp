#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
typedef long double ld;

int main()
{
	ll yr;

    cout << "Enter a year: ";
    cin >> yr;

    if (yr % 4 == 0) 
	{
        if (yr % 100 == 0) 
		{
            if (yr % 400 == 0)
                cout << yr << " is a leap year.";
            else
                cout << yr << " is not a leap year.";
        }
        else
            cout << yr << " is a leap year.";
    }
    else
        cout << yr << " is not a leap year.";

	return 0;
}
