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
	int inp[n][n];
	for(int i = 0 ; i < n ; i++)
	{
	    for(int j = 0 ; j < n ; j++)
	    {
		scanf("%d" , &inp[i][j]);
	    }
	}
	bool check;
	for(int i = 0 ; i < n ; i++)
	{
	    for(int j = i + 1 ; j < n ; j++)
	    {
		check = false;
		for(int k = 0 ; k < n ; k++)
		{
		    if((k != i) && (k != j) && (inp[i][k] + inp[k][j] == inp[i][j]))
		    {
			check = true;
		    }
		}
		if(!check)
		{
		    printf("%d %d \n" , i + 1 , j + 1);
		}
	    }
	}
	cout << endl;
    }
    return 0;
}

