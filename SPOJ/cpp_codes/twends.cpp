//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long cnt = 0;

long long m1(vector<long long> v , int ind)
{
    
//	cnt += v[ind];
	if(v.size() == 2)
	{
	    cnt += max(v[0] , v[1]);
	    long long cnt1 = cnt;
	    cnt = 0;
	    return cnt1;
	}
	cnt += v[ind];
	if(ind == (v.size() - 1))
	{
	    v.erase((v.end() - 1));
	}
	else
	{
	    v.erase(v.begin());
	}    
//	for(int i = 0 ; i < v.size() ; i++)
//	{
//	    cout << v[i] << " ";
//	}
//	cout << endl;
//	cout << cnt << endl;
	if(v[0] >= v[v.size() - 1])
	{
	    v.erase(v.begin());
	}
	else
	{
	    v.erase(v.end() - 1);
	}
	return max(m1(v , 0) , m1(v , v.size() - 1));
}

int main()
{
    for(long long aa = 1 ; ; aa++)
    {
	cnt = 0;
	int n;
	scanf("%d" , &n);
	if(n == 0)
	{
	    break;
	}
	vector<long long> inp;
	long long tot = 0;
	for(int i = 0 ; i < n ; i++)
	{
	    long long x;
	    scanf("%lld" , &x);
	    inp.push_back(x);
	    tot += x;
	}
	if(inp.size() == 1)
	{
	    cout << "In game " << aa << ", the greedy strategy might lose by as many as " << tot <<
	    " points." << endl;
	    continue;
	}
	long long p1 = max(m1(inp , 0) , m1(inp , n - 1));
//	long long temp = m1(inp , 0);
	long long ans = (2*p1) - tot;
//	cout << tot << endl;
//	cout << p1 << endl;
	cout << "In game " << aa << ", the greedy strategy might lose by as many as " << ans <<
	" points." << endl;
    }
    return 0;
}
