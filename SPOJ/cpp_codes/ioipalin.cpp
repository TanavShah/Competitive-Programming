//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int method(string a , string b , int size)
{
    int dp[size + 1][size + 1];
    for(int i = 0 ; i <= size ; i++)
    {
	for(int j = 0 ; j <= size ; j++)
	{
	    if(i*j == 0)
	    {
		dp[i][j] = 0;
	    }
	    else if(a.at(i - 1) == b.at(j - 1))
	    {
		dp[i][j] = dp[i - 1][j - 1] + 1;
	    }
	    else
	    {
		dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1]);
	    }
	}
    }
    return dp[size][size];
}

int main()
{
    int n;
    scanf("%d" , &n);
    string inp;
    cin >> inp;
    string s = inp;
    reverse(inp.begin() , inp.end());
//    cout << s << endl;
  //  cout << inp << endl;
    int p = method(inp , s , n);
  //  cout << p << endl;
    int ans = n - p;
    printf("%d \n" , ans);
    return 0;
}

