//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    scanf("%lld" , &t);
    for(long long aa = 0 ; aa < t ; aa++)
    {
	int e,f;
	cin >> e >> f;
	int n;
	scanf("%d" , &n);
	vector<pair<int,int>> v;
	for(int i = 0 ; i < n ; i++)
	{
	    int p,w;
	    cin >> p >> w;
	    v.push_back(make_pair(p,w));
	}
        long long dp[1000];
	dp[0] = 0;
	for(int i = 1 ; i < 1000 ; i++)
	{
	    dp[i] = -1;
	}
	int count = 0;
        for(int i = 1 ; i <= (f-e) ; i++)
	{
	    for(int j = 0 ; j < n ; j++)
	    {
		if(((v[j].second) <= i) && (dp[i - (v[j].second)] != -1) 
		    && ((dp[i] != -1) || (dp[i] >= dp[i - (v[j].second)] + (v[j].first))))
		{
		    dp[i] = dp[i - (v[j].second)] + (v[j].first);
		    count++;
		}	
	    }   
	}
//	cout << count << endl;
	cout << dp[(f-e)] << endl;
    }
    return 0;
}
