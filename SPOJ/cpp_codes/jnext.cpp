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
	long long n;
	scanf("%lld" , &n);
	int arr[n];
	for(long long i = 0 ; i < n ; i++)
	{
	    scanf("%d" , &arr[i]);
	}
	int cnt = 0;
	long long index;
	for(long long i = n - 1 ; i > 0 ; i--)
	{
	    if(arr[i] > arr[i - 1])
	    {
		swap(arr[i] , arr[i - 1]);
		index = i;
		cnt = 1;
		break;
	    }
	}
	if(cnt == 0)
	{
	    cout << -1 << endl;
	    continue;
	}
	int check[n - index];
	for(long long i = 0 ; i < n - index ; i++)
	{
	    check[i] = arr[index + i];
	}
	sort(check , check + (n - index));
	for(long long i = 0 ; i < n - index ; i++)
	{
	    arr[index + i] = check[i];
	}
	long long pos = 0;
	for(long long i = 0 ; i < n ; i++)
	{
	    if(arr[i] != 0)
	    {
		pos = i;
		break;
	    }
	}
	for(long long i = pos ; i < n ; i++)
	{
	    printf("%d" , arr[i]);
	}
	cout << endl;
    }
    return 0;
}
