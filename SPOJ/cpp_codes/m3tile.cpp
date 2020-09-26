//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long arr[20];
    arr[0] = 1;
    arr[1] = 3;
    arr[2] = 11;
    for(int i = 3 ; i < 20 ; i++)
    {
	arr[i] = (3*(arr[i - 1] + arr[i - 2])) - arr[i - 3];
    }
    while(1)
    {
	int n;
	scanf("%d" , &n);
	if(n == -1)
	{
	    break;
	}
	if((n % 2) == 1)
	{
	    printf("0\n");
	}
	else
	{
	    printf("%lld \n" , arr[n/2]);
	}
    }
    return 0;
}
