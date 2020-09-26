//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
/*
bool check(map<long long , long long> m , long long x)
{
    for(long long i = 0 ; i < m.size() ; i++)
    {
	if(m[i] == x)
	    return true;
    }
    return false;
}
*/
int main()
{
    /*
    vector <long long> inp;
    long long max = 0;
    for(long long aa = 0 ; ; aa++)
    {
	long long x;
	scanf("%lld" , &x);
	if(x == -1)
	{
	    break;
	}
//	cout << x << endl;
	inp.push_back(x);
//	cout << 2 << endl;
    }
    for(long long i = 0 ; i < inp.size() ; i++)
    {
	if(inp[i] > max)
	{
	    max = inp[i];
	}
    }
    */
//    cout << max << endl;
//    cout << 1 << endl;
    int arr[10000000] = {0};
    long long val[500005];
//    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    val[0] = 0;
    arr[0] = 1;
    for(long long i = 1 ; i <= 500004 ; i++)
    {
	if((val[i - 1] - i > 0) && (arr[val[i - 1] - i] == 0))
	{
	    val[i] = val[i - 1] - i;
	    arr[val[i]] = 1;
	}
	else
	{
	    val[i] = val[i - 1] + i;
	    arr[val[i]] = 1;
	}
    }
    /*
    for(long long i = 0 ; i < inp.size() ; i++)
    {
	printf("%lld \n" , val[inp[i]]);
    }
    */
    int k;
    scanf("%d" , &k);
    while(k != -1)
    {
	printf("%lld \n" , val[k]);
	scanf("%d" , &k);
    }
    return 0;
}
