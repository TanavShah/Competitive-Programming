#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

long long gcd(long long a , long long b)
{
	if(b == 0)
		return a;
	return gcd(b , a % b);
}

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	long long n;
	cin >> n;

	vector<pair<long long , long long>> v;
	for (long long i = 1; i * i <= n; i++) 
        if (n % i == 0) 
        	v.push_back(make_pair(i , n / i));


    long long dif = v[0].second - v[0].first;
    long long pos = 0;

    for(long long i = 1 ; i < v.size() ; i++)
    {
    	if(gcd(v[i].first , v[i].second) == 1)
    	{
    		if(v[i].second - v[i].first < dif)
    		{
    			dif = v[i].second - v[i].first;
    			pos = i;
    		}
    	}
    }

    cout << v[pos].first << " " << v[pos].second << endl;
	return  0;
}