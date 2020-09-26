//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
/*
long long fact(long long p)
{
    if(p <= 1) return 1;
    return p*fact(p-1);
}

long long choose(long long x , long long y)
{
    long long x1 = fact(x);
//    cout << x1 << endl;
    long long x2 = fact(y);
  //  cout << x2 << endl;
    long long x3 = fact(x-y);
   // cout << x3 << endl;
    long long ret = x1/(x2*x3);
    return ret;
}
*/
int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	long long n,k;
	scanf("%lld %lld" , &n , &k);
	long long c = min(n-k , k-1);
	long long ans = 1;
	for(long long i = 0 ; i < c ; i++)
	{
	    ans = (ans*(n-i-1))/(i+1);
	}
	cout << ans << endl;
//	cout << endl;
    }
    return 0;
}

