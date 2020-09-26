//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n;
bool prime[10010];

void sieve(int x)
{
    memset(prime , true , sizeof(prime));
    for(int p = 2 ; p*p <= x ; p++)
    {
	if(prime[p] == true)
	{
	    for(int i = p*p ; i <= x ; i += p)
	    {
		prime[i] = false;
	    }
	}
    }
}

int legendre(int y , int x)
{
    int save = x;
    int cnt = 0;
    while(x > 0)
    {
	cnt += (x % y);
	x /= y;
    }
//    cout << 1 << endl;
    int ret = (save - cnt)/(y - 1);
//    ret = ret/(y - 1);
    return ret;
}

int main()
{
    scanf("%d" , &n);
    sieve(n);
//    prime[1] = false;
    map<int , int> ans;
    for(int i = 2 ; i <= n ; i++)
    {
	if(prime[i])
	{
	    ans[i] = legendre(i , n);
	}
    }
    auto i = ans.begin();
    for(i ; i != --ans.end() ; i++)
    {
	cout << i -> first << "^" << i -> second <<    " * ";
    }
    cout << i -> first << "^" << i -> second << endl;
    return 0;
}

