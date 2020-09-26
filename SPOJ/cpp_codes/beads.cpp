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
	string inp;
	cin >> inp;
	inp += inp;
	int n = inp.length();
	int i = 0;
	int ans = 0;
	while(i < (n/2))
	{
	    ans = i;
	    int j = i + 1, k = i;
	    while((j < n) && (inp.at(k) <= inp.at(j)))
	    {
		if(inp.at(k) < inp.at(j))
		{
		    k = i;
		}
		else
		{
		    k++;
		}
		j++;
	
	    }

            while(i <= k)
	    {
		i += (j - k);
	    }        	    
	}
	cout << ans + 1 << endl;
    }
    return 0;
}

