#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll; 

vector<ll> fa;

void printDivisors(ll n) 
{ 
    // Note that this loop runs till square root 
    for (ll i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
                fa.push_back(i);
  
            else // Otherwise print both 
                {
                	fa.push_back(i);
                	fa.push_back(n/i);
                }
        } 
    } 
} 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif


	ll t;
	cin >> t;
	while(t--)
	{
		fa.clear();
		ll n,k;
		cin >> n >> k;
		printDivisors(n);
		sort(fa.begin(), fa.end());

		if(k >= fa[fa.size() - 1])
		{
			cout << 1 << endl;
			continue;
		}

		if(binary_search(fa.begin(), fa.end(), k))
		{
			cout << n/k << endl;
			continue;
		}

		ll pos = lower_bound(fa.begin(), fa.end(), k) - fa.begin() - 1;
		
		cout << n/fa[pos] << endl;

	}

	return  0;
}