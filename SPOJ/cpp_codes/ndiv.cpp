#include <bits/stdc++.h>
#include <chrono>

using namespace std;

#define MOD 1000000007 


bool erato[32000];
int prime[10000];

int met(int x)
{
	if(x == 1)
		return 1;

	int k = 0;
	int ret = 1;
	for(int i = prime[k] ; i*i <= x ; i = prime[++k])
	{
		int cnt = 0;
		while(x % i == 0)
		{
			x = x/i;
			cnt++;
		}
		ret *= (cnt + 1);
	}

	if(x != 1)
		ret *= 2;

	return ret;
}

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output1.txt" , "w" , stdout);
	#endif

	//auto start = chrono::steady_clock::now();

	int a , b , n;
	cin >> a >> b >> n;

	  
	memset(erato , true , sizeof(erato));
	for(int i = 3 ; i <= 180 ; i += 2)
	{
		if(erato[i])
		{
			for(int j = i*i ; j <= 32000 ; j += i)
			{
				erato[j] = false;
			}
		}
	}

	prime[0] = 2;
	int k = 1;

	for(int i = 3 ; i <= 32000 ; i += 2)
	{
		if(erato[i])
		{
			prime[k] = i;
			k++;
		}
	}
	
	int ans = 0;

	for(int i = a ; i <= b ; i++)
	{
		if(met(i) == n)
			ans++;
	}

	cout << ans << endl;
	// auto stop = chrono::steady_clock::now();
	// //auto duration = duration_cast<microseconds>(stop - start);
	// auto diff = stop - start;
	// cout << chrono::duration <double, milli> (diff).count() << " ms" << endl;
	//cout << duration.count() << endl;

	return  0;
}