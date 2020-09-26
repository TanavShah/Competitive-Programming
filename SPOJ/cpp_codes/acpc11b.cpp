//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long mod(long x)
{
    if(x < 0)
	return -x;
	return x;
}

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	int n;
	scanf("%d" , &n);
	long inp1[n];
	for(int i = 0 ; i < n ; i++)
	{
	    scanf("%ld" , &inp1[i]);
	}
        int m;
	scanf("%d" , &m);
	long inp2[m];
	for(int i = 0 ; i < m ; i++)
	{
	    scanf("%ld" , &inp2[i]);
	}
	int i = 0,j = 0;
	sort(inp1,inp1+n);
	sort(inp2,inp2+m);
	long min = 1000000;
	while((i < n) && (j < m))
	{
	    if(mod(inp1[i] - inp2[j]) < min)
	    {
		min = mod(inp1[i] - inp2[j]);
	    }
	    if(inp1[i] < inp2[j])
	    {
		i++;
	    }
	    else
	    {
		j++;
	    }
	}
	cout << min << endl;
    }
    return 0;
}
