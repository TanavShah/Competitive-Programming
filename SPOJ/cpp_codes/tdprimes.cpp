//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 100000100;
//    bool prime[n + 1];
    vector<bool> prime(n + 1 , true);
//    memset(prime , true , sizeof(prime));
    for(int i = 2 ; i*i <= n ; i++)
    {
	if(prime[i])
	{
	    for(int j = i*i ; j <= n ; j += i)
	    {
		prime[j] = false;
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
    for(int i = 0 ; i < 100000000 ; i += 100)
    {
	printf("%d \n" , ans[i]);
    }
    return 0;
}
