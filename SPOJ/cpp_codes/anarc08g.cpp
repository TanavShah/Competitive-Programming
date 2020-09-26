//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(int aa = 1 ; ; aa++)
    {
	int n;
	scanf("%d" , &n);
	if(!n)
	{
	    break;
	}
	int graph[n][n];
	int init = 0;
	for(int i = 0 ; i < n ; i++)
	{
	    for(int j = 0 ; j < n ; j++)
	    {
		scanf("%d" , &graph[i][j]);
		init += graph[i][j];
	    }
	}

	int in[n] = {0};
	int out[n] = {0};

	for(int i = 0 ; i < n ; i++)
	{
	    for(int j = 0 ; j < n ; j++)
	    {
		out[i] += graph[i][j];
		in[j] += graph[i][j];
	    }
	}

	int ans = 0;

	for(int i = 0 ; i < n ; i++)
	{
	    if(in[i] > out[i])
	    {
		ans += in[i] - out[i];
	    }
	}
	printf("%d. %d %d\n" , aa , init , ans);
    }
    return 0;
}

