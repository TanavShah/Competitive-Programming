//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    scanf("%lld",&t);
    for(long long aa = 0 ; aa < t ; aa++)
    {
	long long n,x;
	scanf("%lld %lld", &n , &x);
	if(x == 0)
	{
	    cout <<"Airborne wins." << endl;
	}
	if(x == 1)
	{
	    cout <<"Pagfloyd wins." << endl;
	}
    }
    return 0;
}

