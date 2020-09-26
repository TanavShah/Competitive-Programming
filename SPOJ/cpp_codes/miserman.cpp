//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    scanf("%d %d" , &n , &m);
    int arr[n][m];
    for(int i = 0 ; i < n ; i++)
    {
	for(int j = 0 ; j < m ; j++)
	{
	    scanf("%d" , &arr[i][j]);
	}
    }
    for(int i = n - 2 ; i >= 0 ; i--)
    {
	arr[i][0] += min(arr[i+1][0] , arr[i+1][1]);
	arr[i][m-1] += min(arr[i+1][m-2] , arr[i+1][m-1]);
	for(int j = 1 ; j < m - 1 ; j++)
	{
	    arr[i][j] += min(arr[i+1][j] , min(arr[i+1][j-1] , arr[i+1][j+1]));
	}
    }
    int ans = arr[0][0];
    for(int i = 0 ; i < m ; i++)
    {
	if(arr[0][i] < ans)
	{
	    ans = arr[0][i];
	}
    }
    printf("%d" , ans);
    return 0;
}
