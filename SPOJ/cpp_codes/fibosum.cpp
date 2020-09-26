//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long fibo(long long x)
{
    /*
    double p = sqrt(5);
    double phi1 = ((1 + p)/2);
    double phi2 = ((1 - p)/2);
    long long answer = (long long)((pow(phi1 , x) - pow(phi2 , x))/p);
    answer = answer % 1000000007;
    return answer;
    */
    long long arr[2][2];
    arr[0][0] = 0;
    arr[0][1] = 1;
    arr[1][0] = 1;
    arr[1][1] = 1;

}

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	long long n,m;
	scanf("%lld %lld" , &n , &m);
	long long a = fibo(m+2);
	long long b = fibo(n+1);
	long long ans = (a - b) % 1000000007;
	if(ans < 0)
	{
	    ans += 1000000007;
            ans = ans % 1000000007;
	}
	cout << ans << endl;
    }
    return 0;
}
