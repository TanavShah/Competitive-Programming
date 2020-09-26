//                        Saheb Aaje Su Karvana?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

long long n,k;

int fun(long long num , long long arr[])
{
    long long fr = 0;
    if(num == 0)
	return 0;
    for(long long i = 0 ; i < n ; i++)
    {
	fr += (long long)(arr[i]/num);
    }

    if(fr >= k)
	return 1;
	return 0;
}

long long bs(long long arr[])
{
    long long ini = 0, last = arr[n - 1] , max = 0;

    while(last > ini)
    {
	long long mid = ini + (last - ini + 1)/2;

	if(fun(mid , arr))
	{
	    ini = mid;
	}
	else
	{
	    last = mid - 1;
	}
    }

    return ini;
}

int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
	scanf("%lld %lld" , &n , &k);
	long long arr[n];
	for(long long i = 0 ; i < n ; i++)
	{
	    scanf("%lld" , &arr[i]);
	}
	sort(arr , arr + n);
	/*
	for(int i = 0 ; i < n ; i++)
	{
	    cout << arr[i] << " ";
	}
	cout << endl;
	*/
	long long ans = bs(arr);
	printf("%lld \n" , ans);
    }
    return 0;
}

