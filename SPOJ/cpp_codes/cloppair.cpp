//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

double dis(long x1,long y1,long x2, long y2)
{
    return sqrt(((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2)));
}

int main()
{
    int n;
    cin >> n;
    long a[n][2];
    for(int i = 0 ; i < n ; i++)
    {
	cin >> a[i][0] >> a[i][1];
    }
    double mindis = dis(a[0][0],a[0][1],a[1][0],a[1][1]);
    int i1=0,i2=0;
    for(int i = 0 ; i < n-1 ; i++)
    {
	for(int j = i+1 ; j < n; j++)
	{
	    double x =  dis(a[i][0],a[i][1],a[j][0],a[j][1]);
	    if(x <= mindis)
	    {
		mindis = x;
		i1 = i;
		i2 = j;
	    }
	}
    }
   // cout << mindis << endl;
    cout << i1 << " " << i2 << " ";
    cout << setprecision(6) << fixed << mindis << endl;
    return 0;
} 
