#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll; 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	ll n,x;
	cin >> n >> x;
	ll d[n], sum[n], len[n];
	for(ll i = 0 ; i < n ; i++)
	{
		cin >> d[i];
		len[i] = d[i];
		sum[i] = (d[i]*(d[i] + 1))/2;
	}

	ll ans = 0;

	ll left = x;

	for(ll i = 0 ; i < n ; i++)
	{
		ll temp = 0;
		if(left < len[i] and left != 0)
		{
			temp += sum[i] - (left*(left + 1))/2;
			ans = max(ans, temp);
			left = x;
			continue;
		}

		for(ll j = i ; ; j = (j + 1)%n)
		{
			if(left == 0)
				break;

			if(left < len[j] and left != 0)
			{
				temp += (left*(left + 1))/2;
				ans = max(ans, temp);
				left = x;
				break;
			}

			left -= len[j];
			temp += sum[j];
			ans = max(ans, temp);
		}


		temp = 0;
		left = x;


		for(ll j = i ; ; j = (j - 1 + n)%n)
		{
			if(left == 0)
				break;

			if(left < len[j])
			{
				left = len[j] - left;
				temp += (sum[j] - ((left*(left + 1))/2));
				ans = max(ans, temp);
				left = x;
				
				break;
			}

			left -= len[j];
			temp += sum[j];
			ans = max(ans, temp);
		}

		ans = max(ans, temp);
		left = x;
	}

	cout << ans << endl;



	return  0;
}