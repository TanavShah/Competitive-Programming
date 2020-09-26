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
	int n;
	scanf("%d" , &n);
	int r[n],R[n];
	for(int i = 0 ; i < n ; i++)
	{
	    scanf("%d %d" , &r[i] , &R[i]);
	}
	int max = r[0];
	int pos = 0;
	for(int i = 0 ; i < n ; i++)
	{
	    if(r[i] > max)
	    {
		max = r[i];
		pos = i;
	    }
	}
	int flag = 0;
	for(int i = 0 ; i < n ; i++)
	{
	    if(i == pos)
	    {
		continue;
	    }
	    if(R[i] >= max)
	    {
		cout << -1 << endl;
		flag = 1;
		break;
	    }
	}
	if(flag == 0)
	{
	    cout << pos + 1 << endl;
	}
    }
    return 0;
}
