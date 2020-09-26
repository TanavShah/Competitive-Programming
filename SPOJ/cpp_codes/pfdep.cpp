//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<long long> adj[105];
vector<long long> ans;

void kahnalgo(long long n)
{
    vector<long long> indegree(n + 1 , 0);
    for(long long i = 1 ; i <= n ; i++)
    {
	for(long long j = 0 ; j < adj[i].size() ; j++)
	{
	    indegree[adj[i][j]]++;
	}
    }

    priority_queue<long long , vector<long long> , greater<long long>> q;
    for(long long i = 1 ; i <= n ; i++)
    {
	if(!indegree[i])
	{
	    q.push(i);
	}
    }
    while(!q.empty())
    {
	long long curr = q.top();
	ans.push_back(curr);
	q.pop();

	for(long long i = 0 ; i < adj[curr].size() ; i++)
	{
	    if(--indegree[adj[curr][i]] == 0)
	    {
		q.push(adj[curr][i]);
	    }
	}
    }
}

int main()
{
    long long n,m;
    scanf("%lld %lld" , &n , &m);
    while(m--)
    {
	long long a,k;
	scanf("%lld %lld" , &a , &k);
	while(k--)
	{
	    long long b;
	    scanf("%lld" , &b);
	    adj[b].push_back(a);
	}
    }

    kahnalgo(n);

    for(long long i = 0 ; i < ans.size() ; i++)
    {
	cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}

