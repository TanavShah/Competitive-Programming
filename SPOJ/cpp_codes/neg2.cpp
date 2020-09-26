//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long absol(long long x)
{
    if(x <= 0)
	return -x;
	return x;
}

int main()
{
    long long n;
    scanf("%lld" , &n);
    if(n == 0)
    {
	cout << 0 << endl;
	exit(0);
    }
    string ans = "";
    while(n != 0)
    {
	int mod = absol(n) % 2;
	ans += to_string(mod);
	if(mod == 0)
	{
	    n = ((0 - n) / 2);
	}
	else
	{
	    n = ((1 - n) / 2);
	}
    }
    reverse(ans.begin() , ans.end());
    cout << ans << endl;
    return 0;
}
