#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long t;
    cin >> t;
    for( long  aa = 0; aa < t; aa++)
    {
	long a1,a2,a3,a4,a5,a6;
	cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
	long A1, A2,A3,A4,A5,A6;
	A1 = a1*a1;
	A2 = a2*a2;
	A3 = a3*a3;
	A4 = a4*a4;
	A5 = a5*a5;
	A6 = a6*a6;
	double vol;
	vol = ((A1*A5*(A2 + A3 + A4 + A6 - A1 - A5))+(A2*A6*(A1+A3+A4+A5 - A2 -
	A6))+(A3*A4*(A1+A2+A5+A6-A3-A4)) - (A1*A2*A4) - (A2*A3*A5)-(A1*A3*A6)- (A4*A5*A6));
	double v;
	v = (sqrt(vol))/12;
	std::cout << std::fixed << std::setprecision(4) << v << endl;	
    }
    return 0;
}
