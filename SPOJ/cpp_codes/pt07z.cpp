//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long i,u,v,node,top,rm,ri;
vector<long long> gr[10002];
long long dis[10002];

void bfs(long long start)
{
    bool visited[node + 1];
    memset(visited , false , sizeof(visited));
    memset(dis , 0 , sizeof(dis));
    queue <long long> s;
    s.push(start);
    visited[start] = true;
    while(s.empty() == false)
    {
	top = s.front();
	s.pop();
	for(i = 0 ; i < gr[top].size() ; i++)
	{
	    if(!visited[gr[top][i]])
	    {
		dis[gr[top][i]] = dis[top] + 1;
		visited[gr[top][i]] = true;
		s.push(gr[top][i]);
	    }
	}
    }
    rm = 0;

    for(i = 1 ; i < node + 1 ; i++)
    {
	rm = max(rm , dis[i]);
	if(rm == dis[i])
	{
	    ri = i;
	}
    }
}

int main()
{
    scanf("%lld" , &node);
    long long t = node - 1;
    while(t--)
    {
	scanf("%lld %lld" , &u , &v);
	gr[u].push_back(v);
	gr[v].push_back(u);
    }
    bfs(1);
    bfs(ri);
    printf("%lld \n" , rm);
    return 0;
}
