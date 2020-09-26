//                        Saheb Aaje Su Karvana?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

int main()
{
    long long n;
    scanf("%lld" , &n);
    long long ans = 0;

    multiset<long long> m;
    multiset<long long> :: iterator f,r;

    while(n--)
    {
	long long k;
	scanf("%lld" , &k);
	while(k--)
	{
	    long long temp;
	    scanf("%lld" , &temp);
	    m.insert(temp);
	}

	f = m.begin();
	r = m.end();
	r--;
	
	ans += (*r - *f);
	m.erase(f);
	m.erase(r);

    }

    printf("%lld \n" , ans);
    return 0;
}

