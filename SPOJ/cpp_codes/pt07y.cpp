//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool BFS(vector<int> graph[] , int start , int n)
{
    bool visited[n + 1] = {0};
    queue<int> q;
    q.push(start);
    int cnt = 0;
    int node;
    memset(visited , 0 , sizeof(visited));
    while(!q.empty())
    {
	node = q.front();
	q.pop();
	visited[node] = 1;

	for(int i = 0 ; i < graph[node].size() ; i++)
	{
	    if(visited[graph[node][i]])
		return 0;
		else
		{
		    q.push(graph[node][i]);
		}
	}
	++cnt;
    }
    if(cnt != n)
	return 0;
	return 1;
}

int main()
{
    int n,m,u,v;
    scanf("%d %d" , &n , &m);
    vector<int> graph[n + 1];
    for(int i = 0 ; i < m ; i++)
    {
	scanf("%d %d" , &u , &v);
	graph[u].push_back(v);
//	graph[v].push_back(u);
    }
    if(BFS(graph , 1 , n))
    {
	printf("YES\n");
    }
    else
    {
	printf("NO\n");
    }
    return 0;
}
