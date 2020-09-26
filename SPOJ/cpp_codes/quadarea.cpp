//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	double a,b,c,d;
	scanf("%lf" "%lf" "%lf" "%lf" , &a , &b , &c , &d);
	double sp = (a+b+c+d)/2;
	double d1 = (sp - a)*(sp - b)*(sp - c)*(sp - d);
	double ans = sqrt(d1);
	cout << fixed << setprecision(2) << ans << endl;
    }
    return 0;
}

