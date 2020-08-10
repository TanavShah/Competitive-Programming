//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h,w;
    scanf("%d %d" , &h , &w);
    int harr[h];
    int warr[w];
    for(int i = 0 ; i < h ; i++)
    {
	scanf("%d" , &harr[i]);
    }
    for(int i = 0 ; i < w ; i++)
    {
	scanf("%d" , &warr[i]);
    }
    int str[h][w];
    for(int i = 0 ; i < h ; i++)
    {
	for(int j = 0 ; j < w ; j++)
	{
	    str[i][j] = 0;
	}
    }
    for(int i =0  ; i < h ; i++)
    {
	for(int j = 0 ;j < harr[i]; j++)
	{
	    str[i][j] = 1;
	}
    }
    for(int i = 0 ; i < w ; i++)
    {
	for(int j = 0 ; j < warr[i] ; j++)
	{
	    str[j][i] = 1;
	}
    }

    for(int i = 0 ; i < h ; i++)
    {
	if(harr[i] == w)
	{
	    continue;
	}
	else
	{
	    if(warr[harr[i]] > i)
	    {
		cout << 0 << endl;
		exit(0);
	    }
	}
    }

    for(int j = 0 ; j < w ; j++)
    {
	if(warr[j] == h)
	{
	    continue;
	}
	else
	{
	    if(harr[warr[j]] > j)
	    {
		cout << 0 << endl;
		exit(0);
	    }
	}
    }
    for(int i = 0 ; i < h ; i++)
    {
	int nz = 0;
	for(int j = 0 ; j < w ; j++)
	{
	    if(nz == 0 && str[i][j] == 0)
	    {
		nz = 1;
		continue;
	    }
	    else if(str[i][j] == 0)
	    {
		str[i][j] = 2;
	    }
	}
    }
    for(int j = 0 ; j < w ; j++)
    {
	for(int i = 0 ; i < h ; i++)
	{
	    if(str[i][j] == 0)
	    {
		break;
	    }
	    if(str[i][j] == 2)
	    {
		str[i][j] = 0;
		break;
	    }
	}
    }
    int cnt = 0;
    for(int i = 0 ; i < h ; i++)
    {
	for(int j = 0 ; j < w ; j++)
	{
	    if(str[i][j] ==2)
	    {
		cnt++;
	    }
	}
}
	long long ans = 1;
	for(int i = 0 ; i < cnt ; i++)
	{
	    ans = (ans*2) % 1000000007;
	}
	cout << ans << endl;

    return 0;
}

