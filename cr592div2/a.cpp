//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	int a,b,c,d,k;
	cin >> a >> b >> c >> d >> k;
	int pen = ceil((double)a/(double)c);
	int cil = ceil((double)b/(double)d);
	if(pen + cil <= k)
	{
	    cout << pen << " " << cil << endl;
	}
	else
	{
	    cout << -1 << endl;
	}
    }
    return 0;
}

