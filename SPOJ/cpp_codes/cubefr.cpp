//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

map<long long , long long> pfs;

void primefs(long long n)
{
    while((n % 2) == 0)
    {
	pfs[2]++;
	n = n/2;
    }
    for(long long i = 3 ; i <= sqrt(n) ; i += 2)
    {
	while((n % i) == 0)
	{
	    pfs[i]++;
	    n = n/i;
	}
    }
    if(n > 2)
    {
	pfs[n]++;
    }
}

bool isprimefr(long long x)
{
    if(x == 1)
	return true;
    primefs(x);
    for(auto i = pfs.begin() ; i != pfs.end() ; i++)
    {
	if((i -> second) >= 3)
	{
	    pfs.clear();
	    return false;
	}    
    }
    pfs.clear();
    return true;
}

int main()
{
    long long t;
    scanf("%lld" , &t);
    long long inp[t];
    long long max = 0;
    for(long long aa = 0 ; aa < t ; aa++)
    {
	scanf("%lld" , &inp[aa]);
	if(inp[aa] > max)
	{
	    max = inp[aa];
	}
    }
    long long ans[max + 10] = {0};
//    ans[1] = 1;
    for(long long i = 1 ; i <= max ; i++)
    {
	if(isprimefr(i))
	{
	    ans[i] = i;
	}
    }
    long long pos[max + 10] = {0};
    long long cnt = 1;
    for(long long i = 1 ; i <= max ; i++)
    {
	if(ans[i] != 0)
	{
	    pos[i] = cnt;
	    cnt++;
	}
    }
    /*
    for(int i = 0 ; i <= max ; i++)
    {
	cout << ans[i] << " " << pos[i] << endl;
    }
 */
    for(long long i = 0 ; i < t ; i++)
   {
	if(ans[inp[i]] == 0)
	{
	    cout << "Case " << i + 1 << ": Not Cube Free" << endl;
	}
	else
	{
	   cout << "Case " << i + 1 << ": " << pos[inp[i]] << endl;
	}
   }
   
    return 0;
}
