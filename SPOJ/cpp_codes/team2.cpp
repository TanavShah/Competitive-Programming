//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long arr[4];
    int cnt = 1;
    while(scanf("%lld%lld%lld%lld" , &arr[0] , &arr[1] , &arr[2] , &arr[3]) != EOF)
    {
	sort(arr , arr + 4);
	printf("Case %d: %lld\n" , cnt++ , arr[2] + arr[3]);
    }
    return 0;
}

