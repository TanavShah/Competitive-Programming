//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    string s;
    cin >> s;

    ll ev = 0, od = 0;
    ll cnte[2] = {0}, cnto[2] = {0};

    for(int i = 0 ; i < s.length() ; i++)
    {
	od++;
	if(i % 2 == 0)
	{
	    od += cnte[s.at(i) - 'a'];
	    ev += cnto[s.at(i) - 'a'];
	    cnte[s.at(i) - 'a']++;
	}
	else
	{
	    od += cnto[s.at(i) - 'a'];
	    ev += cnte[s.at(i) - 'a'];
	    cnto[s.at(i) - 'a']++;
	}
    }
    
    cout << ev << " " << od << endl;

    return 0;
}

