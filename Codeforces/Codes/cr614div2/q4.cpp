#include <bits/stdc++.h>
 
using namespace std;
 
#define MOD 1000000007 
 
long long dis(long long a , long long b , long long c , long long d)
{
	return (abs(c - a) + abs(d - b));
}
 
int main()
{
 
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif
 
	long long x0,y0,ax,ay,bx,by;
	cin >> x0 >> y0 >> ax >> ay >> bx >> by;
	long long xs,ys,t;
	cin >> xs >> ys >> t;
 
 
 
	long long x[100], y[100];
	x[0] = x0;
	y[0] = y0;
 
	for(long long i = 1 ; i < 100 ; i++)
	{
		x[i] = ax*x[i - 1] + bx;
	}
 
	for(long long i = 1 ; i < 100 ; i++)
	{
		y[i] = ay*y[i - 1] + by;
	}
 
 
	long long mindis = 9223372036854775806;
	long long cnt = 1;
	long long ans = 0;
	long long ind = -1;
 
	for(int i = 0 ; i < 100 ; i++)
	{
		if(x[i] < 0 or y[i] < 0)
			break;
		if(dis(xs , ys , x[i] , y[i]) < mindis)
		{
			mindis = dis(xs , ys , x[i] , y[i]);
			ind = i;
		}
	}
 
	ans += mindis;
	if(ans > t)
	{
		cout << 0 << endl;
		exit(0);
	}
 
	for(int i = ind ; i >= 1 ; i--)
	{
		ans += dis(x[i] , y[i] , x[i - 1] , y[i - 1]);
		cnt++;
		if(ans > t)
		{
			ans -= dis(x[i] , y[i] , x[i - 1] , y[i - 1]);
			cnt--;
			cout << cnt << endl;
			exit(0);
		}
	}
 
	if(ans <= t)
	{
		ans += dis(x[0] , y[0] , x[ind + 1] , y[ind + 1]);
		cnt++;
		if(ans > t)
		{
			ans -= dis(x[0] , y[0] , x[ind + 1] , y[ind + 1]);
			cnt--;
			cout << cnt << endl;
			exit(0);
		}	
	}
 
	if(ans <= t)
	{
		for(int i = ind + 2 ; i < 100 ; i++)
		{
			ans += dis(x[i] , y[i] , x[i - 1] , y[i - 1]);
			cnt++;
			if(ans > t)
			{
				ans -= dis(x[i] , y[i] , x[i - 1] , y[i - 1]);
				cnt--;
				cout << cnt << endl;
				exit(0);
			}
		}
	}
 
	
	return  0;
}