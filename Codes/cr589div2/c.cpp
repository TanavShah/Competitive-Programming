//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> forx;

void met(int p)
{
    if(p % 2 == 0)
    {
	forx.push_back(2);
	while(p % 2 == 0)
	{
	    p = p/2;
	}
    }
    for(int i = 3 ; i <= sqrt(p) ; i+=2)
    {
	if(p % i == 0)
	{
	    forx.push_back(i);
	    while(p % i == 0)
	    {
		p = p/i;
	    }
	}
    }
    if(p > 2)
    {
	forx.push_back(p);
    }
}

long long findpow(long long n , int p)
{
    long long cnt = 0;
    n = n/p;
    while(n)
    {	
	cnt++;
	n = n/p;
    }
    return cnt;
}

int main()
{
    int x;
    long long n;
    scanf("%d %lld" , &x , &n);
    met(x);
    long long ans = 1;
    for(int i = 0 ; i < forx.size() ; i++)
    {
//	cout << forx[i] << " ";
//	long long k = (long long)((double)log10(n)/(double)log10(forx[i]));
	long long k = findpow(n , forx[i]);
	long long m = (k*k + k)/2;
//	long long temp = (long long)pow(forx[i] , m) % 1000000007;
	long long temp = 1;
	for(long long j = 0 ; j < m ; j++)
	{
	    temp = (temp*forx[i]) %  1000000007;
	}
	ans = (ans*temp) % 1000000007;
    }
  //  cout << endl;
    cout << ans << endl;
    return 0;
}

