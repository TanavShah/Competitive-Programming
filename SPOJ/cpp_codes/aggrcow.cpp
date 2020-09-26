//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class A
{
long long modd(long long arr[],long long low,long long high)
{
    B obj;
    obj.pos[low] = arr[low];
    obj.pos[high] = arr[high];
    long long mid = ((low + high)/2);
    obj.pos[(high - 1)/2] = arr[mid];
    modd(arr,low,mid);
}
};

class B
{
int main()
{
    long long t;
    scanf("%lld",&t);
    for(long long aa = 0 ; aa < t ; aa++)
    {
	long long n,c;
	scanf("%lld",&n);
	scanf("%lld",&c);
	long long a[n];
	for(long long i = 0 ; i < n ; i++)
	{
	    scanf("%lld",&a[i]);
	}
	sort(a,n);
	long long ans;
	long long pos[c];
	if((c % 2) != 0)
	{
	   ans = modd(a,0,n-1);
	}
	else
	{
	    ans = meven(a,0,n-1);
	}
	cout << ans << endl;
    }
    return 0;
}
};
