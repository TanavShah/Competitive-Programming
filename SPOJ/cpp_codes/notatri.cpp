//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int flag = 0;

long long method(long long arr[] , long long st , long long en , long long x)
{
    long long mid = st + (en - st)/2;        
    if(en >= st)
    {
	if(arr[mid] == x)
	{
	    flag = 1;
	    return mid;
	}
	if(arr[mid] > x)
	    return method(arr , st , mid - 1 , x);
	    return method(arr , mid + 1 , en , x);
    }
    return mid;
}

int main()
{
    for(long long aa = 0 ; ; aa++)
    {
	int n;
	scanf("%d" , &n);
	if(n == 0)
	{
	    break;
	}
	long long inp[n];
	for(int i = 0 ; i < n ; i++)
	{	
	    scanf("%lld" , &inp[i]);
	}
	sort(inp , inp + n);
	long long cnt = 0;
	for(int i = 0 ; i < n - 2 ; i++)
	{
	    for(int j = i + 1 ; j < n - 1 ; j++)
	    {
	        long long ind = method(inp , 0 , n - 1 , inp[i] + inp[j]);
//		cout << ind << "," << flag << " ";
		if(flag = 0)
		{
		    cnt += n - ind;
//		    cout << ind  << " " << flag << endl;
		    flag = 0;
		}
		if(flag = 1)
		{
		    flag = 0;
		    long long ans = method(inp , 0 , n - 1 , inp[i] + inp[j] + 1);
		    for(int x = ind ; ; x++)
		    {
			if(inp[x] != inp[x + 1])
			{
			    break;
			}
			else
			{
			    ans++;
			}
		    }
//		    cout << ans << " " << flag << endl;
		    cnt += n - ans;
		}
		flag = 0;
	    }
//	    cout << endl;
	}
	printf("%lld \n" , cnt);
    }
    return 0;
}
