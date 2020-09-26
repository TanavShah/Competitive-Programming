#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	int t;
	cin >> t;
	while(t--)
	{
		int a,b,c;
		cin >> a >> b >> c;
		int arr[7] = {0};
		int ans = 0;
		if(c > 0)
		{
			c--;
			ans++;
			arr[0] = 1;
		}
		if(b > 0)
		{
			b--;
			ans++;
			arr[1] = 1;
		}
		if(a > 0)
		{
			a--;
			ans++;
			arr[2] = 1;
		}

		int big = max(a,max(b,c));
		int sma = min(a,min(b,c));
		int mid = a + b + c - big - sma;

		if(sma == 0 and mid == 0)
		{
			cout << ans << endl;
			continue;
		}

		if(a >= 3 and b >= 3 and c>= 3)
		{
			ans+=4;
			cout << ans << endl;
			continue;
		}

		if(a >= 2 and b >= 2 and c>= 2)
		{
			ans+=3;
			cout << ans << endl;
			continue;
		}		

		if(sma == 0 and mid > 0)
		{
			ans += 1;
			cout << ans << endl;
			continue;
		}

		if(sma == 1 and mid > 1 and big > 1)
		{
			ans+=2;
			cout << ans << endl;
			continue;
		}

		if(sma == 1 and mid == 1 and big > 1)
		{
			ans+=2;
			cout << ans << endl;
			continue;
		}

		if(sma == 1 and mid == 1 and big == 1)
		{
			ans+=1;
			cout << ans << endl;
			continue;
		}

		// if(sma > 0 and big > 0)
		// {

		// 	big--;
		// 	sma--;
		// 	ans++;
		// }
		// if(a > 0 and c > 0)
		// {
		// 	a--;
		// 	c--;
		// 	ans++;
		// }
		// if(c > 0 and b > 0)
		// {
		// 	c--;
		// 	b--;
		// 	ans++;
		// }
		// if(a > 0 and b > 0 and c > 0)
		// {
		// 	ans++;
		// }
		cout << ans << endl;
	}


	return  0;
}