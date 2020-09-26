//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int ceil(int x, int y)
{
    if((x % y) == 0)
	return (x/y);
	return (int)(x/y) + 1;
}

int main()
{
    for(long long aa = 0 ; ; aa++)
    {
	int e,f,s,m,e1,f1,s1,m1;
	scanf("%d %d %d %d %d %d %d %d" , &e , &f , &s , &m , &e1 , &f1 , &s1 , &m1);
	if((e == -1) && (f == -1) && (s == -1) && (m == -1) && (e1 == -1) && (f1 == -1) && (s1 ==
	    -1) && (m1 == -1))
	{
	    break;
	}
	if((e == 0) && (f == 0) && (s == 0) && (m == 0))
	{
	    cout << "0 0 0 0" << endl;
	    continue;
	}
	int arr[4];
	arr[0] = ceil(e , e1);
	arr[1] = ceil(f , f1);
	arr[2] = ceil(s , s1);
	arr[3] = ceil(m , m1);
	int maxans = max(arr[0] , max(arr[1] , max(arr[2] , arr[3])));
	int ans1 = (maxans*e1) - e;
	int ans2 = (maxans*f1) - f;
	int ans3 = (maxans*s1) - s;
	int ans4 = (maxans*m1) - m;
	cout << ans1 << " " << ans2 << " " << ans3 << " " << ans4 << endl;
    }
    return 0;
}
