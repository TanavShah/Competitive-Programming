#include <iostream>
#include <bits/stdc++.h>

using namespace std;

double volume(long b1, long b2,long b3,long b4,long b5,long b6)
{
	long A1, A2,A3,A4,A5,A6;
	A1 = b1*b1;
	A2 = b2*b2;
	A3 = b3*b3;
	A4 = b4*b4;
	A5 = b5*b5;
	A6 = b6*b6;
	double vol;
	vol = ((A1*A5*(A2 + A3 + A4 + A6 - A1 - A5))+(A2*A6*(A1+A3+A4+A5 - A2 -
	A6))+(A3*A4*(A1+A2+A5+A6-A3-A4)) - (A1*A2*A4) - (A2*A3*A5)-(A1*A3*A6)- (A4*A5*A6));
	double v;
	v = (sqrt(vol))/12;
	return v;
}

double area(long b1, long b2,long b3)
{
    double s = (b1 + b2 + b3)/2;
    double A = s*(s-b1)*(s-b2)*(s-b3);
    double ans = sqrt(A);
    return ans;
}

int main()
{
    long t;
    cin >> t;
    for(long aa = 0 ; aa < t ; aa++)
    {
	long a1,a2,a3,a4,a5,a6;
	cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
	double ar1 = area(a1,a2,a3);
	double ar2 = area(a3,a4,a6);
	double ar3 = area(a2,a4,a5);
	double ar4 = area(a1,a5,a6);
	double vol = volume(a1,a2,a3,a4,a5,a6);
	double ans = (3*vol)/(ar1 + ar2 + ar3 + ar4);
	std :: cout << std :: fixed << std :: setprecision(4) << ans << endl;
    }
}
