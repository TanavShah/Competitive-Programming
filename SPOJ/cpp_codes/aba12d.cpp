//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


bool prime(int p)
{
    if(p == 2)
    {
	return true;
    }
    for(int i = 3 ; i <= sqrt(p) ; i += 2)
    {
	if((p % i) == 0)
	{
	    return false;
	}
    }
    return true;
}

int search(vector<int> v , int x , int l , int r)
{
    int mid;
    while(l <= r)
    {
	mid = l + (r - 1)/2;
	if(v[mid] == x)
	    return mid;
	if(v[mid] < x)
	    l = mid + 1;
	else
	    r = mid - 1;
    }
    return mid;
}

int main()
{
    int t;
    scanf("%d" , &t);
    vector<int> sol;
    sol.push_back(2);
    cout << 0 << endl;
    for(int i = 2 ; i <= 1000 ; i++)
    {
	if(prime(i))
	{
	    for(int j = 2 ; ; j += 2)
	    {
		int x = pow(i , j);
		if(x > 1000000)
		{
		    break;
		}
		else
		{
		    sol.push_back(x);
		}
	    }
	}
    }
    cout << 1 << endl;
    sort(sol.begin() , sol.end());
    int size = sol.size();
    while(t--)
    {
	int a,b;
	scanf("%d %d" , &a , &b);
	int pos1 = search(sol , a , 0 , size);
	int pos2 = search(sol , b , 0 , size);
	int ans = pos2 - pos1;
	if(a == 2)
	{
	    ans++;
	}
	printf("%d \n" , ans);
    }
    return 0;
}

