//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long search(long long x , vector<vector<long long>> v)
{
    long long low = 0 , high = v.size();
    while(high - low > 1)
    {
	long long mid = (low + high)/2;
	if(v[mid][0] >= x)
	    high = mid;
	    else
		low = mid;
    }
    return high;
}

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	long long n;
	scanf("%lld" , &n);
	vector<vector<long long>> inp;
	for(long long i = 0 ; i < n ; i++)
	{
	    vector<long long> temp;
	    long long a,b,c;
	    scanf("%lld %lld %lld" , &a , &b , &c);
	    temp.push_back(a);
	    temp.push_back(a + b);
	    temp.push_back(c);
	    inp.push_back(temp);
	}
	sort(inp.begin() , inp.end());
	for(int i = 0 ; i < n ; i++)
	{
	    cout << inp[i][0] << " " << inp[i][1] << " " << inp[i][2] << endl;
	}
	long long dp[n];
	for(long long i = n - 1 ; i >= 0 ; i--)
	{
	    dp[i] = max(dp[i + 1] , (dp[search(inp[i][1] , inp)] , inp[i][2]));
	}
	printf("%lld \n" , dp[0]);

    }
    return 0 ;
}

