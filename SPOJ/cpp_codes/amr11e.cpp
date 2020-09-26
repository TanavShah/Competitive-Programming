//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

map<long long, long long> str;
map<long long, long long> fact;

bool pfactor(int z)
{
    while((z % 2) == 0)
    {
	fact[2]++;
	z = z/2;
    }
    for(int i = 3 ; i <= sqrt(z) ; i+=2)
    {
	while((z % i) == 0)
	{
	    fact[i]++;
	    z = z / i;
	}
    }
    if(z > 2)
    {
	fact[z]++;
    }
    if(fact.size() >= 3)
	return true;
	return false;
}

int main()
{
    int n;
    scanf("%d" , &n);
//	int n;
//	scanf("%d" , &n);
	int arr[n];
	for(int i = 0 ; i < n ; i++)
	{
	    scanf("%d" , &arr[i]);
	}
	int max = arr[0];
	for(int i = 0 ; i < n ; i++)
	{
	    if(arr[i] > max)
	    {
		max = arr[i];
	    }
	}
	str[1] = 30;
	str[2] = 42;
	int cnt = 3;
	int i = 60;
	while(str.size() != max + 2)
	{
	    if(pfactor(i))
	    {
		str[cnt] = i;
		cnt++;
	    }
	    fact.clear();
	    i++;
	}
	for(int i = 0 ; i < n ; i++)
	{
	    for(auto j = str.begin() ; j != str.end() ; j++)
	    {
		if(arr[i] == (j -> first))
		{
		    cout << j -> second << endl;
		    break;
		}
	    }
	}
    return 0;
}

