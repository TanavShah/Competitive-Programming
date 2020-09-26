#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(long aa = 0 ; ; aa++)
    {
	float n;
	cin >> n;
	if(n == 0.00)
	{
	    break;
	}
	int ans;
	float x = 0.00;
	for(int i = 1 ; ; i++)
	{
	    x +=(float) (1.00/(i+1.00));
	    if(x >= n)
	    {
		ans = i;
		break;
	    }
	}
	cout << ans << " card(s)" << endl;
    }
    return 0;
}
