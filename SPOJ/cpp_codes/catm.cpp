//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    scanf("%d %d" , &n , &m);
    int k;
    scanf("%d" , &k);
    while(k--)
    {
	int xm,ym,xc1,yc1,xc2,yc2;
	scanf("%d %d %d %d %d %d" , &xm , &ym , &xc1 , &yc1 , &xc2 , &yc2);
	int d1,d1t1,d1t2;
	d1 = xm - 1;
	d1t1 = xc1 + abs(yc1 - ym) - 1;
	d1t2 = xc2 + abs(yc2 - ym) - 1;
	if((d1 < d1t1) && (d1 < d1t2))
	{
	    cout << "YES" << endl;
	    continue;
	}

	d1 = n - xm;
	d1t1 = n - xc1 + abs(yc1 - ym);
	d1t2 = n - xc2 + abs(yc2 - ym);
	if((d1 < d1t1) && (d1 < d1t2))
	{
	    cout << "YES" << endl;
	    continue;
	}

	d1 = ym - 1;
	d1t1 = yc1 - 1 + abs(xc1 - xm);
	d1t2 = yc2 - 1 + abs(xc2 - xm);
	if((d1 < d1t1) && (d1 < d1t2))
	{
	    cout << "YES" << endl;
	    continue;
	}

	d1 = m - ym;
	d1t1 = m - yc1 + abs(xc1 - xm);
	d1t2 = m - yc2 + abs(xc2 - xm);
	if((d1 < d1t1) && (d1 < d1t2))
	{
	    cout << "YES" << endl;
	    continue;
	}
	cout << "NO" << endl;
    }
    return 0;
}
