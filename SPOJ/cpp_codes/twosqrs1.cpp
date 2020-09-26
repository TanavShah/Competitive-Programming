//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

map<long long, long long> m;

void method(long long x)
{
    while((x % 2) == 0)
    {
	m[2]++;
	x = x/2;
    }
    for(long long i = 3 ; i <= sqrt(x) ; i = i + 2)
    {
	while((x % i) == 0)
	{
	    m[i]++;
	    x = x/i;
	}
    }
    if(x > 2)
    {
	m[x]++;
    }
}

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	long long n;
	scanf("%lld" , &n);
	long long c = 0;
	if(n == 0)
	{
	    cout << "Yes" << endl;
	    continue;
	}
	method(n);
//        cout << n << " The map is : " << endl;
//	for(auto i = m.begin() ; i != m.end() ; i++)
//	{
//	    cout << i->first << " " << i-> second << endl;
//	}
	for(auto i = m.begin() ; i != m.end() ; i++)
	{
	    if(((i -> first) % 4) == 3)
	    {
		if(((i -> second) % 2) == 1)
		{
		    cout << "No" << endl;
		    c = 1;
		    break;
		}
	    }
	}
	if(c == 0)
	{
	    cout << "Yes" << endl;
	}
	m.clear();
    }
    return 0;
}
