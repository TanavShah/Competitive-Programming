//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d" , &n);
    set <int> inp;
    for(int  i = 0 ; i < n ; i++)
    {
	int x;
	scanf("%d" , &x);
	inp.insert(x);
	int m;
	scanf("%d" , &m);
	for(int j = 0 ; j < m ; j++)
	{
	    int p;
	    scanf("%d" , &p);
	    inp.insert(p);
	}
    }
    long long ans = inp.size() - n;
    cout << ans << endl;
    return 0;
}

