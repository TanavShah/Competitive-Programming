//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long search(long long arr[] , long long x , long long st , long long en)
{
    if(en >= st)
    {
	long long mid = st + (en - st)/2;
	if(arr[mid] == x)
	{
	    return mid;
	}
	if(arr[mid] > x)
	{
	    return search(arr , x , st , mid - 1);
	}
	return search(arr , x , mid + 1 , en);
    }
    return -1;
}

int main()
{
    long long n,k;
    scanf("%lld %lld" , &n , &k);
    long long inp[n];
    for(long long i = 0 ; i < n ; i++)
    {
	scanf("%lld" , &inp[i]);
    }
    sort(inp , inp + n);
    long long cnt = 0;
    for(long long i = 0 ; i < n - 1 ; i++)
    {
	if(search(inp , inp[i] + k , i , n - 1) != -1)
	{
	    cnt++;
	}
    }
    if((inp[n-2] + k) == inp[n-1])
    {
	cnt++;
    }
    printf("%lld \n" , cnt);
//    long long ar[] = {1 , 3 , 6 , 7 , 9};
//    long long ans = search(ar , 6 , 0 , 4);
//    cout << ans << endl;
    return 0;
}
