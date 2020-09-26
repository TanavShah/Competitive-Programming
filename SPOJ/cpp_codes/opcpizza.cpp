//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
	int n,m;
	scanf("%d %d" , &n , &m);
	int arr[n];
	for(int i = 0 ; i < n ; i++)
	{
	    scanf("%d" , &arr[i]);
	}
	sort(arr , arr + n);
//	for(int i = 0 ; i < n ; i++)
//	{
//	    cout << arr[i] << " ";
//	}
//	cout << endl;
	int sum;
	int cnt = 0;
	int i = 0;
	int j = n - 1;
	while(i != j)
	{
	   sum = arr[i] + arr[j];
	//   cout << sum << endl;
	   if(sum == m)
	   {
	       cnt++;
	       i++;
	   }
	   else if(sum > m)
	   {
	       j--;
	   }
	   else
	   {
	       i++;
	   }
	}
	printf("%d \n" , cnt);
    }
    return 0;
}

