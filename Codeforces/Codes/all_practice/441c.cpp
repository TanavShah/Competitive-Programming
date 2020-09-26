//		    Su Saheb?      

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int n,m,k;
    cin >> n >> m >> k;

    int size = (n*m)/k;
    int x = 1, y = 1, p = 0;

    for(int i = 0 ; i < k - 1 ; i++)
    {
	cout << size << " ";
	
	for(int j = 0 ; j < size ; j++)
	{
	    cout << x << " " << y << " ";
	    y = y + pow(-1, p);
	    if(y == m + 1 or y == 0)
	    {
		p++;
		y = y + pow(-1 , p);
		x++;
	    }
	}

	cout << endl;
	
    }

    cout << size + (n*m - k*size) << " ";
    for(int i = 0 ; i < size + (n*m - k*size) ; i++)
    {
	    cout << x << " " << y << " ";
	    y = y + pow(-1, p);
	    if(y == m + 1 or y == 0)
	    {
		p++;
		y = y + pow(-1 , p);
		x++;
	    }
    }

    cout << endl;

    return 0;
}

