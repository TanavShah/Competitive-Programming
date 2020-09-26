//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

double dis(long a1, long b1, long a2, long b2)
{
    double ans = sqrt(((a2-a1)*(a2-a1)) + ((b2-b1)*(b2-b1)));
    return ans;
}

bool online(long x1, long y1 , long x2, long y2, long xr, long yr)
{
     return dis(x1,y1,xr,yr) + dis(xr,yr,x2,y2) == dis(x1,y1,x2,y2);
}

bool sameside(long x1, long y1 , long x2, long y2 , long xk, long yk , long xr, long yr)
{
    if((x1 == x2))
    {
	if((xk >= x1) && (xr >= x1))
	{
	    return true;
	}
	if((xk <= x1) && (xr <= x1))
	{
	    return true;
	}
	return false;
    }
    else
    {
    double slope = (y2 - y1)/(x2 - x1);
    double ck = yk - y1 - ((slope)*(xk - x1));
    double cr = yr - y1 - ((slope)*(xr - x1));
    if((ck >= 0) && (cr >= 0))
    {
	return true;
    }
    if((ck <= 0) && (cr <= 0))
    {
	return true;
    }
    return false;
    }
}

int main()
{
    long n,q;
    scanf("%ld %ld" , &n , &q);
    long pts[2*n];
    for(long i = 0 ; i < 2*n ; i++)
    {
	scanf("%ld" , &pts[i]);
    }
    for(long aa = 0 ; aa < q ; aa++)
    {
	long x,y;
	long c = 0;
	long cnt = 0;
	scanf("%ld %ld" , &x , &y);
	if(online(pts[0],pts[1],pts[(2*n) - 2],pts[(2*n) - 1],x,y))
	    {
		cout << "D" << endl;
		continue;
	    }
	for(long i = 0 ; i < (2*n) - 3 ; i = i + 2)
	{
	    if(online(pts[i],pts[i+1],pts[i+2],pts[i+3],x,y))
	    {
		cout << "D" << endl;
		c++;
		break;
	    }
	}
	if(c != 0)
	{
	    continue;
	}
//	cout << "SUCCESS" << endl;
	if(sameside(pts[0],pts[1],pts[(2*n) - 2],pts[(2*n) - 1],pts[2],pts[3],x,y))
	    {
		//cout << "D" << endl;
		cnt++;
	    }
         if(sameside(pts[(2*n) - 4],pts[(2*n) - 3],pts[(2*n) - 2],pts[(2*n) - 1],pts[0],pts[1],x,y))
	    {
		//cout << "D" << endl;
		cnt++;
	    }
	for(long i = 0 ; i < (2*n) - 5 ; i = i + 2)
	{
	    if(sameside(pts[i],pts[i+1],pts[i+2],pts[i+3],pts[(2*n) - 2],pts[(2*n) - 1],x,y))
	    {
//		cout << "D" << endl;
		cnt++;
//		break;
	    }
	}
	if(cnt == n)
	{
	    cout << "D" << endl;
	    continue;
	}
	else
	{
	    cout << "F" << endl;
	    continue;
	}
    }
    return 0;
}
