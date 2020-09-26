#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int fun(int p)
{
    int ans = 0;
    for(int i=1;;i++)
    {
	ans += (p/(pow(5,i)));
	if((p/(pow(5,i))) == 0)
	{
	    break;
	}
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    for(int aa = 0; aa < t ; aa++)
    {
	int n;
	cin >> n;
	int sum;
	sum = fun(n);
	cout << sum << endl;
    }
    return 0;
}
