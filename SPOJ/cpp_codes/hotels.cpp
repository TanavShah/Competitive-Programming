//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;
    scanf("%lld %lld" , &n , &m);
    long long arr[n];
    for(long long i = 0 ; i < n ; i++)
    {
	scanf("%lld" , &arr[i]);
    }
    long long *p1 = &arr[0];
    long long sum = 0;    
    long long arr1[n] = {0};
    for(int i = 0 ; i < n ; i++)
    {
        long long *p2 = p1;	
	for(long long x = 0 ; ; x++)
	{
            arr1[i] += *p2;
	    p2++;
	    if(arr1[i] > m)
	    {
		break;
	    }
    	}
            if(arr[i] == m)
	    {
		cout << m << endl;
		exit(0);
	    }
	 else
	 {
              arr1[i] = arr1[i] - *((p2) - 1);       	
	 }
	p1++;
    }
    long long ans = arr1[0];
    for(long long i = 0 ; i < n ; i++)
    {
	if(arr1[i] > ans)
	{
	    ans = arr1[i];
       	}
    }
    cout << ans << endl;
    return 0;
}

