//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 1 ; aa <= t ; aa++)
    {
	long r;
	scanf("%ld" , &r);
	double s = (4*r*r) + 0.25;
	cout << "Case " << aa << ": " << fixed << setprecision(2) << s << endl;
    }
    return 0;
}

