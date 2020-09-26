#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long rev (long p)
{
    long ans = 0;
    while(p > 0)
    {
	ans = (ans*10) + (p%10);
	p = p/10;
    }
    return ans;
}

int main()
{
    long t;
    cin >> t;
    for(long aa = 0; aa < t; aa++)
    {
	long n1,n2;
	cin >> n1 >> n2;
	cout << rev(rev(n1) + rev(n2)) << endl;
    }



}
