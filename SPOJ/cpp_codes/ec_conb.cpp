//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string binary(long long x)
{
    long long size;
    for(long long i = 1 ; ; i++)
    {
	if((x / (pow(2 , i))) == 0)
	{
	    size = i;
	    break;
	}
    }
    int arr[size];
    long long i;
    for(i = 0 ; x > 0 ; i++)
    {
    	if(x == 0)
    	{
    	    break;
    	}
	arr[i] = x % 2;
	x = x/2;
    }
    string s = to_string(arr[i - 1]);
    for(i = i - 2 ; i >= 0 ; i--)
    {
	s += to_string(arr[i]);
    }
    return s;
}

long long method(long long z)
{
    string b = binary(z);
    long long ret = 0;
    for(long long i = 0 ; i < b.size() ; i++)
    {
	long long no = (int)b.at(i) - 48;
	ret += (no*(pow(2 , i)));
    }
    return ret;
}

int main()
{
    long long n;
    scanf("%lld" , &n);
    for(long long aa = 0 ; aa < n ; aa++)
    {
	
	long long inp;
	scanf("%lld" , &inp);
	if((inp % 2) == 1)
	{
            printf("%lld \n" , inp);
	}
	if((inp % 2) == 0)
	{
	    long long ans;
	    ans = method(inp);
	    printf("%lld \n" , ans);
	    continue;
	}
//	cout << binary(inp) << endl;
    }
    return 0;
}
