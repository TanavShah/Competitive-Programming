//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
	int x,y,z;
	cin >> x >> y >> z;
	if(z > max(x , y))
	{
	    cout << "NO" << endl;
	    continue;
	}
	else
	{
	    if(z % __gcd(x , y))
	    {
		cout << "NO" << endl;
	    }
	    else
	    {
		cout << "YES" << endl;
	    }
	}
    }
    return 0;
}

