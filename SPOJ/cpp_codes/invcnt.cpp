//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long t;
    cin >> t;
    for(long aa  = 0 ; aa < t ; aa++)
    {
	cout << endl;
	int n;
	cin >> n;
	long a[n];
	for(int i = 0 ; i < n ;i++)
	{
	    cin >> a[i];
	}
	long inv = 0;
	for(int i = 0 ; i < n-1 ; i++)
	{
	    for(int j = i+1 ; j < n ; j++)
	    {
		if(a[i] > a[j])
		{
		    inv++;
		}
	    }
	}
	cout << inv << endl;
    }
    return 0;
}

