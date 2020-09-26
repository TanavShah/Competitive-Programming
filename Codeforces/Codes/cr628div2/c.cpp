#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

vector<int> deg;

bool met(int i, int j)
{
	return (deg[i] > deg[j]);
}

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	int n;
	cin >> n;
	map<int,vector<int>> ed;

	int arr[3][n - 1];

	for(int i = 0 ; i < n - 1 ; i++)
	{
		int u,v;
		cin >> u >> v;
		u--;
		v--;
		ed[u].push_back(v);
		ed[v].push_back(u);
		arr[0][i] = min(u,v);
		arr[1][i] = max(u,v);
	}
	
	for(int i = 0 ; i < n ; i++)
	{
		deg.push_back(ed[i].size());
	}

	int node[n];
	for(int i = 0 ; i < n ; i++)
		node[i] = i;

	map<int, vector<pair<int,int>>> a1;
	int cnt = n - 2;
	int hor = 0;

	while(cnt >= 0)
	{
	sort(node, node + n , met);	
	sort(ed[node[0]].begin() , ed[node[0]].end() , met);
	
	for(int i = 0 ; i < ed[node[0]].size() ; i++)
	{

		if(a1[node[0]].size() != ed[node[0]].size())
		{
		a1[node[0]].push_back(make_pair(ed[node[0]][i], cnt));
		a1[ed[node[0]][i]].push_back(make_pair(node[0], cnt));
		deg[node[0]]--;
		deg[ed[node[0]][i]]--;
		cnt--;
		}
		if(cnt < 0)
		break;
	
	}
	}

	for(int i = 0 ; i < n - 1 ; i++)
	{
		for(int j = 0 ; j < a1[arr[0][i]].size() ; j++)
		{
			if(a1[arr[0][i]][j].first == arr[1][i])
			{
				cout << a1[arr[0][i]][j].second << endl;
			}
		}
		
	}

	return  0;
}