//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long dp[105][105];

long long lisagets(int i , int j , string a , string b)
{
    if(i == j)
    {
	return (a[i - 1] - '0');
    }
    if(dp[i][j] != -1)
    {
	return dp[i][j];
    }

    long long ret = -10;
    for(int k = i ; k < j ; k++)
    {
	long long temp;
	if(b[k - 1] == '+')
	{
	    temp = lisagets(i , k , a , b) + lisagets(k + 1 , j , a , b);
	}
	else
	{
 	    temp = lisagets(i , k , a , b) * lisagets(k + 1 , j , a , b);                    
	}
	ret = max(ret , temp);
    }
    dp[i][j] = ret;
    return ret;
}

long long manfredgets(int i , int j , string a , string b)
{
    if(i == j)
    {
	return (a[i - 1] - '0');
    }
    if(dp[i][j] != -1)
    {
	return dp[i][j];
    }

    long long ret = INT_MAX;
    for(int k = i ; k < j ; k++)
    {
	long long temp;
	if(b[k - 1] == '+')
	{
	    temp = manfredgets(i , k , a , b) + manfredgets(k + 1 , j , a , b);
	}
	else
	{
 	    temp = manfredgets(i , k , a , b) * manfredgets(k + 1 , j , a , b);                    
	}
	ret = min(ret , temp);
    }
    dp[i][j] = ret;
    return ret;
}

int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
	string inp;
	cin >> inp;
	string a,b;
	for(int i = 0 ; i < inp.length() ; i++)
	{
	    if(isdigit(inp[i]))
	    {
		a.push_back(inp[i]);
	    }
	    else
	    {
		b.push_back(inp[i]);
	    }
	}

	for(int i = 0 ; i < 105 ; i++)
	{
	    for(int j = 0 ; j < 105 ; j++)
	    {
		dp[i][j] = -1;
	    }
	}
	
	long long lg = lisagets(1 , a.size() , a , b);
 	
	for(int i = 0 ; i < 105 ; i++)
	{
	    for(int j = 0 ; j < 105 ; j++)
	    {
//		cout << dp[i][j] << " ";
		dp[i][j] = -1;
	    }
//	    cout << endl;
	}              	
	long long mg = manfredgets(1 , a.size() , a , b);
	printf("%lld %lld \n" , lg , mg);
    }	
    return 0;
}

