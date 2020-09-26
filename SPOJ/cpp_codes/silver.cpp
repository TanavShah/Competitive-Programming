//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(int aa = 0 ; ; aa++)
    {
	int n;
	scanf("%d", &n);
	if(n == 0)
	{
	    break;
	}
	int ans = log2(n);
	printf("%d \n" , ans);
    }
    return 0;
}

