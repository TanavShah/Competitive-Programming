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
	double ans = (double)n/(double)(n + 1);
	printf("%.8f\n" , ans);
    }
    return 0;
}

