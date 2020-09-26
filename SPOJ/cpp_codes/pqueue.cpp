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
	int n,m;
	scanf("%d %d" , &n , &m);
	priority_queue<int> pq;
	queue<int> q;
	for(int i = 0 ; i < n ; i++)
	{
	    int temp;
	    scanf("%d" , &temp);
	    q.push(temp);
	    pq.push(temp);
	}
	int ans = 0;
	int ele = n;
	while(1)
	{
	    if((m == 0) && (q.front() == pq.top()))
	    {
		ans++;
		break;
	    }
	    if(q.front() == pq.top())
	    {
		m--;
		pq.pop();
		q.pop();
		ele--;
		ans++;
	    }
	    else
	    {
		int temp = q.front();
		q.pop();
		q.push(temp);
		if(m != 0)
		{
		    m--;
		}
		else
		{
		    m = ele - 1;
		}
	    }
	}
	printf("%d \n" , ans);
    }
    return 0;
}

