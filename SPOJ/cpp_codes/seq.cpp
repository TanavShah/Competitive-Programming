//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
	int k;
	scanf("%d" , &k);
	int stb[k + 1];
	int stc[k + 1];
	for(int i = 1 ; i <= k ; i++)
	{
	    scanf("%d" , &stb[i]);
	}
	for(int i = 1 ; i <= k ; i++)
	{
	    scanf("%d" , &stc[i]);
	}
	int n;
	scanf("%d" , &n);
	long long sta[n + 1];
	for(int i = 1 ; i <= k ; i++)
	{
	    sta[i] = stb[i];
	}
	for(int i = k + 1 ; i <= n ; i++)
	{
	    sta[i] = 0;
	    for(int j = 1 ; j <= k ; j++)
	    {
		sta[i] = (sta[i] + ((stc[j]*sta[i - j]) % 1000000000)) % 1000000000;
	    }
	}
	printf("%lld \n" , sta[n]);
    }
    return 0;
}

