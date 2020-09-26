//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int dis(int a, int b, int c, int d)
{
    if((a>=c) && (b>=d))
    {
	return a - c + b - d;
    }
    if((a>=c) && (b<d))
    {
	return a - c + d - b;
    }
    if((a<c) && (b>=d))
    {
	return  c - a + b - d;
    }
    if((a<c) && (b<d))
    {
	return c - a + d - b;
    }
}
int main()
{
    long t;
    scanf("%ld" , &t);
    for(long aa = 0 ; aa < t ; aa++)
    {
	int n, m;
	scanf("%d" "%d" , &n , &m);
	char input[n][m];
	for(int i = 0 ; i < n ; i++)
	{
	for(int j = 0 ; j < m ; j++)
	{
	    cin >> input[i][j];
	}
	}
	int inp[n][m];
	for(int i = 0 ; i < n ; i++)
	{
	    for(int j = 0 ; j < m ; j++)
	    {
		inp[i][j] = (int)input[i][j] - 48;
	    }
	}
	int ans[n][m];
	for(int i = 0 ; i < n ; i++)
	{
	    for(int j = 0 ; j < m ; j++)
	    {
		ans[i][j] = 0;
	    }
	}
	vector<pair<int,int>> store;
//	int counter = 0;
	for(int i = 0 ; i < n ; i++)
	{
	    for(int j = 0 ; j < m ; j++)
	    {
		if(inp[i][j] == 1)
		{
		    store.push_back(make_pair(i,j));
		}
	    }
	}
	int size = store.size();
//	cout << size << endl;
//	map<int,int> :: iterator itr;
	for(int i = 0 ; i < n ; i++)
	{
	    for(int j = 0 ; j < m ; j++)
	    {
		if(inp[i][j] == 0)
		{
		    ans[i][j] = dis(i,j,store[0].first,store[0].second);
		    for(int k = 0 ; k < size ; k++)
		    {
			int x = dis(i , j , store[k].first , store[k].second); 
			if(x < ans[i][j])
			{
			    ans[i][j] = x;
			   // cout << i << j << " "  << itr->first << itr->second << endl;
			}
		    }
		}
	    }
	}
	for(int i = 0 ; i < n ; i++)
	{
	    for(int j = 0 ; j < m ; j++)
	    {
		cout << ans[i][j] << " ";
	    }
	    cout << endl;
	}
	cout << endl;
    }
    return 0;
}
