//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a , long long b)
{
    if(b == 0)
	return a;
	return gcd(b , a % b);
}

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	string inp;
	cin >> inp;
	int ind = -1;
	int len = inp.length();
	for(int i = 0 ; i < len ; i++)
	{
	    if(inp.at(i) == '.')
	    {
		ind = i;
		break;
	    }
	}
	if(ind == -1)
	{
	    cout << 1 << endl;
	    continue;
	}
	string dec = "";
	for(int i = 0 ; i < ind ; i++)
	{
	    dec = dec + inp.at(i);
	}
	for(int i = ind + 1 ; i < len ; i++)
	{
	    dec = dec + inp.at(i);
	}
	long long n = stoll(dec);
	long long div = gcd(n , pow(10 , len - ind - 1));
	long long ans = pow(10 , len - ind - 1)/div;
	printf("%lld \n" , ans);
	/*
	double m = n / pow(10 , (len - 1 - ind));
	for(int i = 2 ; i <= 10000 ; i++)
	{
	    if(checkint(m*i))
	    {
		cout << i << endl;
		break;
	    }
	}
	*/
    }
    return 0;
}
