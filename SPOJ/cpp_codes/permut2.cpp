//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(long aa  = 0 ; ; aa++)
    {
	int n;
	cin >> n;
	if(n == 0)
	{
	    break;
	}
	int a[n];
	for(int i = 0 ; i < n ; i++)
	{
	    cin >> a[i];
	}
	int count = 0; 
	for(int i = 0 ; i < n ; i++)
	{
	    if(a[a[i]-1]  == i+1)
	    {
		count++;
	    }
	}
	if(count == n)
	{
	    cout << "ambiguous" << endl;
	}
	else
	{
	    cout << "not ambiguous" << endl;
	}
    }
    return 0;
}
