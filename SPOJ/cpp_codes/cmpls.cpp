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
	int n,c;
	scanf("%d %d" , &n , &c);
	long long arr[n][n + c];
	for(int i = 0 ; i < n ; i++)
	{
	    for(int j = 0 ; j < n + c ; j++)
	    {
		arr[i][j] = 0;
	    }
	}
	for(int i = 0 ; i < n ; i++)
	{
	    scanf("%lld" , &arr[0][i]);
	}
	for(int i = 1 ; i < n ; i++)
	{
	    for(int j = 0 ; j < (n - i) ; j++)
	    {
		arr[i][j] = arr[i - 1][j + 1] - arr[i - 1][j];
	    }
	}
	for(int i = 1 ; i < (n + c) ; i++)
	{
	    arr[n - 1][i] = arr[n - 1][0];
	}

	for(int i = n - 2 ; i >= 0 ; i--)
	{
	    for(int j = n - i ; j < (n + c) ; j++)
	    {

		arr[i][j] = arr[i][j - 1] + arr[i + 1][j - 1];
	    }
	}
	for(int i = n ; i < (n + c) ; i++)
	{
	    printf("%lld " , arr[0][i]);
	}
	printf("\n");
    }
    return 0;
}

