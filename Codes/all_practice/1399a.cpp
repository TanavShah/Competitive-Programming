//			Goli Beta, Masti Nai...

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	int n;
	cin >> n;

	int arr[n];
	for(int i = 0 ; i < n ; i++)
	    cin >> arr[i];

	sort(arr, arr + n);

	if(n == 1)
	{
	    cout << "YES" << endl;
	    continue;
	}

	int fl = 1;

	for(int i = 1 ; i < n ; i++)
	    if(abs(arr[i] - arr[i - 1]) > 1)
		fl = 0;

	if(fl)
	    cout << "YES" << endl;
	else
	    cout << "NO" << endl;
    }

    return 0;
}

