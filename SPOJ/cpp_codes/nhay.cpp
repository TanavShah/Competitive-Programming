//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    while (cin >> n)
    {
	char ndl[n];
	string hay;
	for(long long i = 0 ; i < n ; i++)
	{
	    cin >> ndl[i];
	}
	/*
	for(long long aa = 0 ; ; aa++)
	{
	    char x;
	    cin >> x;
	    if((x == '\0') || (x == EOF))
	    {
		break;
	    }
	    else
	    {
		hay.push_back(x);
	    }
	}
	*/
	cin >> hay;
	long long size = hay.length();
	if(size < n)
	{
	    cout << endl;
	    continue;
	}
	for(long long i = 0 ; i < size - n + 1; i++)
	{
	    long long c = 0;
	    for(long long k = 0 ; k < n ; k ++)
	    {
		if(hay.at(i+k) == ndl[k])
		{
		    c++;
		}
	    }
	    if(c == n)
	    {
		cout << i << endl;
	    }
	    else
	    {
		continue;
	    }
	}
	cout << endl;
    }
    return 0;
}
