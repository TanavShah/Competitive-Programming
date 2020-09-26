//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long met(long long r , long long s , long long *a , long long *b)
{
    if(r == 0)
    {
	*a = 0;
	*b = 1;
	return s;
    }

    long long x1 , y1;
    long long gcd = met(s % r , r , &x1 , &y1);

    *a = y1 - (s/r)*x1;
    *b = x1;
    return gcd;
}

int main()
{
    long long n,p,w,d;
    cin >> n >> p >> w >> d;
    if(p != 0 and p < d)
    {
	cout << -1 << endl;
	return 0;
    }
    long long a,b;
    long long g = met(w , d , &a , &b);
   // cout << a << " " << b << " " << g << endl;
    long long x = (a*p)/g;
    long long y = (b*p)/g;
    long long z = n - x - y;
    for(long long k = 1 ; ;k++)
    {
	if(x >= 0 and y >= 0 and z >= 0)
	{
	    cout << x << " " << y << " " << z << endl;
	    return 0;
	}
	long long t1 = (x + ((k*d)/g))*w;
	long long t2 = (y - ((k*w)/g))*d;
	if(t1 > p or t2 > p)
	{
	    break;
	}
	t1 = t1/w;
	t2 = t2/d;
	long long t3 = (n - t1 - t2);
//	cout << t1 << " " << t2 << " " << t3 << endl;
	if(t1 >= 0 and t2 >= 0 and t3 >= 0)
	{
	    cout << t1 << " " << t2 << " " << t3 << endl;
	    return 0;
	}
    }
//    long long z = n - x - y;
    
	cout << -1 << endl;
	return 0;
    

    return 0;
}

