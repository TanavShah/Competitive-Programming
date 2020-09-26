//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 33900;
//    vector<int> ans;
//    for(int i = 2 ; i <= n ; i++)
  //  {
//	ans.push_back(i);
//    }
    bool prime[n + 1];
    for(int i = 0 ; i < n ; i++)
    {
	prime[i] = true;
    }
    for(int i = 2 ; i < n ; i++)
    {
	int cnt = 0;
	if(prime[i])
	{
	    for(int j = i + 1 ; j <= n ; j++)
	    {
		if(prime[j])
		{
		    cnt++;
		}
		if(cnt % i == 0)
		{
		    prime[j] = false;
		}    
	    }
	}
    }
    vector<int> ans;
    for(int i = 2 ; i <= n ; i++)
    {
	if(prime[i])
	{
	    ans.push_back(i);
	}
    }
    while(1)
    {
	int t;
	scanf("%d" , &t);
	if(t == 0)
	{
	    break;
	}
	printf("%d \n" , ans[t - 1]);
    }
    return 0;
}
