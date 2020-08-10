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


	ll n,m;
	cin >> n >> m;
	ll arr[m];
	ll k[m];
	ll sum = 0;
	ll left = n;
	for(ll i = 0 ; i < m ; i++)
	{
		cin >> arr[i];
		k[i] = arr[i - 1];
		sum += arr[i];
	}

	if(sum < n)
	{
		cout << -1 << endl;
		exit(0);
	}

	ll col[n] = {0};

	ll can = n;

	// col[0] = 1;
	can -= 1;
	left -= arr[0];
	int flag = 0;
	ll pos = 0;

	for(ll i = 0 ; i < m ; i++)
	{
		for(ll j = pos ; j < (pos + arr[i]) ; j++)
		{
			col[j] = i + 1;
		}

		pos += arr[i] - 1;
		
		can -= 1;
		left -= arr[i];
	}

	if(flag == 1)
	{
		cout << -1 << endl;
	}

	ll next = 1;

	for(ll i = 0 ; i < m ; i++)
	{
		cout << next << " ";
		next += (arr[i] - 1);
	}
	cout << endl;




	return  0;
}