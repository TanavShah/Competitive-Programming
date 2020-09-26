//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int odd = 0, even = 0;
    for(int i = 0 ; i < n ; i++)
    {
	cin >> arr[i];
	if(arr[i] == 0)
	    continue;
	
	if(arr[i] % 2)
	    odd++;
	else
	    even++;
    }

    if(n == 1)
    {
	cout << 0 << endl;
	return 0;
    }

    odd = (n + 1)/2 - odd;
    even = n/2 - even;

    map<ll, ll> grp;
    int start = -1;
    if(arr[0] == 0)
	start = 0;
    
    ll ans = 0;
//   cout << start << endl;

    for(int i = 1 ; i < n ; i++)
    {
	if(arr[i] != 0 and arr[i - 1] == 0)
	    grp[start] = i - 1;
	
	if(arr[i] == 0 and arr[i - 1] != 0)
	    start = i;

	if(arr[i] != 0 and arr[i - 1] != 0)
	{
	    if((arr[i] + arr[i - 1]) % 2)
		ans++;
	}
//	cout << start << " " << grp[start] << endl;
    }

    if(start == -1)
    {
	cout << ans << endl;
	return 0;
    }

    if(grp[start] == 0)
	grp[start] = n - 1;

    for(auto i = grp.begin() ; i != grp.end() ; i++)
    {
	
	int l = i -> first;
	int r = i -> second;

//	cout << l << " " << r << endl;

	if(i -> second == n - 1)
	    break;

	if(i -> first == 0)
	    continue;

	int numodd = 0, numev = 0;
	if(arr[(i -> first) - 1] % 2)
	    numodd++;
	else
	    numev++;
	
	if(arr[(i -> second) + 1] % 2)
	    numodd++;
	else
	    numev++;

//	cout << "oe " << odd << " " << even << endl;

	if(numodd == 2)
	{
	    if((r - l + 1) <= odd)
		odd -= (r - l + 1);
	    else
		ans += 2;
	}

	else if(numev == 2)
	{
	    if((r - l + 1) <= even)
		even -= (r - l + 1);
	    else
		ans += 2;
	}
	
	else
	    ans++;

//	cout << ans << endl;

    }


    map<ll, ll> :: iterator itr;
    itr = grp.begin();

    int st = itr -> first;
    int en = itr -> second;

    if(itr -> first == 0)
    {
	if(itr -> second != (n - 1))
	{
	    if(arr[(itr -> second) + 1] % 2)
	    {
		if((en - st + 1) > odd)
		{
		    ans++;
		}
		else
		{
		    odd -= (en - st + 1);
		}
	    }
	    else
	    {
		if((en - st + 1) > even)
		    ans++;
		else
		    even -= (en - st + 1);
	    }
	}
	else
	    ans = 1;
    }

    if(grp[start] == n - 1 and start != 0)
    {
	st = start - 1;
	int need = n - start;
	if(arr[st] % 2)
	{
	    if(need > odd)
		ans++;
	}
	else
	{
	    if(need > even)
		ans++;
	}
    }

    cout << ans << endl;



    return 0;
}

