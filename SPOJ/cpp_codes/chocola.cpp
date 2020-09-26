//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
//    cout << endl;
    for(int aa = 0 ; aa < t ; aa++)
    {
	int m,n;
	scanf("%d %d" , &m , &n);
	long long x[1001],y[1001];
	for(int i = 1 ; i < m ; i++)
	{
	    scanf("%lld" , &x[i]);
	}
	for(int i = 1 ; i < n ; i++)
	{
	    scanf("%lld" , &y[i]);
	}
	int hori = 1 , vert = 1;
	sort(x + 1 , x + m);
	reverse(x + 1 , x + m);
	sort(y + 1 , y + n);
	reverse(y + 1 , y + n);
	int i = 1 , j = 1;
	long long cost = 0;
	while((i < m) && (j < n))
	{
	    if(x[i] > y[j])
	    {
		cost += x[i]*vert;
		hori++;
		i++;
	    }
	    else
	    {
		cost += y[j]*hori;
		vert++;
		j++;
	    }
	}
	if(i < m)
	{
	    int sum = 0;
	    while(i < m)
	    {
		sum += x[i];
		i++;
	    }
	    cost += sum*vert;
	}
	else
	{
	    int sum = 0;
	    while(j < n)
	    {
		sum += y[j];
		j++;
	    }
	    cost += sum*hori;
	}
	printf("%lld \n" , cost);
    }
    return 0;
}

