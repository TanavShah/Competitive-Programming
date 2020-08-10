//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

bool check(string str, ll b)
{
    int rem = 0;
    for(int i = 0 ; i < str.length() ; i++)
    {
	rem = 10*rem;
	rem += (str.at(i) - '0');
	rem %= b;
    }
    if(!rem)
	return true;
	return false;
}

int main()
{
    string inp;
    cin >> inp;
    ll n = inp.length();
    ll a,b;
    scanf("%lld %lld", &a, &b);
    int pos = -1;
    int rem = 0;

    for(int i = 0 ; i < n ; i++)
    {
	rem = 10*rem;
	rem += (inp.at(i) - '0');
	rem %= a;
	if(rem == 0)
	{
	    if(i != n - 1 and inp.at(i + 1) != '0')
	    {
		string str = inp.substr(i + 1, n - i - 1);
		if(check(str, b))
		{
		    pos = i;
		    break;
		}
	    }
	}
    }

    if(pos == -1)
    {
	cout << "NO" << endl;
    }
    else
    {
	cout << "YES" << endl;
	cout << inp.substr(0, pos + 1) << endl;
	cout << inp.substr(pos + 1, n - pos - 1) << endl;
    }

    return 0;
}

