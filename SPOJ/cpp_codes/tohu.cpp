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
	int n;
	scanf("%d" , &n);
	double ans = 0.75;
	double x = (double)1/(double)(2*(n + 1)*(n + 2));
	ans -= x;
	printf("%.11f\n" , ans);
    }
    return 0;
}

