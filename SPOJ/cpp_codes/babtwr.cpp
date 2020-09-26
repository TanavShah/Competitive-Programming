//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct pile
{
    int h,w,d;
};

int compare(const void*a , const void *b)
{
    return((*(pile *)b).d * (*(pile *)b).w) - ((*(pile *)a).d * (*(pile *)a).w);
}

long long method(pile arr[] , int size)
{
    pile tower[3*size];
    int ind = 0;

    for(int i = 0 ; i < size ; i++)
    {
	tower[ind].h = arr[i].h;
	tower[ind].d = max(arr[i].d , arr[i].w);
	tower[ind].w = min(arr[i].d , arr[i].w);
	ind++;

	tower[ind].h = arr[i].w;
	tower[ind].d = max(arr[i].d , arr[i].h);
	tower[ind].w = min(arr[i].d , arr[i].h);
	ind++;

	tower[ind].h = arr[i].d;
	tower[ind].d = max(arr[i].h , arr[i].w);
	tower[ind].w = min(arr[i].h , arr[i].w);
	ind++;
    }

    size = 3*size;
    qsort(tower , size , sizeof(tower[0]) , compare);

    long long maxh[size];
    for(int i = 0 ; i < size ; i++)
    {
	maxh[i] = tower[i].h;
    }

    for(int i = 1 ; i < size ; i++)
    {
	for(int j = 0 ; j < i ; j++)
	{
	    if((tower[i].w < tower[j].w) && (tower[i].d < tower[j].d) && (maxh[i] < maxh[j] +
		tower[i].h))
	    {
		maxh[i] = maxh[j] + tower[i].h;
	    }
	}
    }
    long long max = -1;
    for(int i = 0 ; i < size ; i++)
    {
	if(maxh[i] > max)
	{
	    max = maxh[i];
	}
    }
    return max;
}

int main()
{
    while(1)
    {
	int n;
	scanf("%d" , &n);
	if(n == 0)
	{
	    break;
	}
	pile inp[n];
	for(int i = 0 ; i < n ; i++)
	{
	    scanf("%d %d %d" , &(inp[i].h) , &(inp[i].w) , &(inp[i].d));
	}
	long long ans = method(inp , n);
	printf("%lld \n" , ans);
    }
    return 0;
}

