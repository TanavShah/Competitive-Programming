//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int max(int r,int s,int t)
{
    int maxval = (r > s) ? r : s;
    int maxval1 = (maxval > t) ? maxval : t;
    return maxval1;
}

int main()
{
    int t;
    cin >> t;
    for(int aa = 0 ; aa < t ; aa++)
    {
	int h,w;
	cin >> h >> w;
	int stones[h][w+2] = {0};
	stones[0][w+1] = 0;
	for(int i = 0 ; i < h ; i++)
	{
	    for(int j = 1 ; j <= w ; j++)
	    {
		cin >> stones[i][j];
	    }
	}
	
	for(int i = h -2 ; i >= 0 ; i--)
	{
	    for(int j = 1 ; j <= w ; j++)
	    {
		stones[i][j] += max((stones[i+1][j-1]),(stones[i+1][j]),(stones[i+1][j+1]));
	    }
	}
	int ans = stones[0][1];
	for(int i = 2 ; i <= w ; i++)
	{
	    if(stones[0][i] > ans)
	    {
		ans = stones[0][i];
	    }
	}
	cout << ans << endl;
    }
    return 0;
}
