#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007 

long long max(long long a , long long b)
{
	if(a > b)
		return a;
	return b;
}

long long maxSubArraySum(long long a[], long long size) 
{ 
   long long max_so_far = a[0]; 
   long long curr_max = a[0]; 
  
   for (long long i = 1; i < size; i++) 
   { 
        curr_max = max(a[i], curr_max+a[i]); 
        max_so_far = max(max_so_far, curr_max); 
   } 
   return max_so_far; 
}

long long maxSubArraylen(long long a[], long long size) 
{ 
    long long max_so_far = INT_MIN, max_ending_here = 0, 
       start =0, end = 0, s=0; 
  
    for (long long i=0; i< size; i++ ) 
    { 
        max_ending_here += a[i]; 
  
        if (max_so_far < max_ending_here) 
        { 
            max_so_far = max_ending_here; 
            start = s; 
            end = i; 
        } 
  
        if (max_ending_here < 0) 
        { 
            max_ending_here = 0; 
            s = i + 1; 
        } 
    } 
      

    long long temp = 0;
    //int flag = 0;
    long long pos = -1;
    for(long long i = start ; i < end ; i++)
    {
    	temp += a[i];
    	if(temp == 0)
    	{
    		pos = i;
    	}
    }
    if(pos != -1)
    start = pos + 1;

    temp = 0;
    pos = -1;
    for(long long i = end ; i >= start ; i--)
    {
    	temp += a[i];
    	if(temp == 0)
    	{
    		pos = i;
    	}
    }
    if(pos != -1)
    	end = pos - 1;
    //cout << start << " " << end << endl;;
    return (end - start + 1); 
} 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif



	long long t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		long long arr[n];
		long long sum = 0;
		for(long long i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}

		//int s2 = maxSubArraySum(arr , n);
		long long len = maxSubArraylen(arr , n);

		if(len == n)
		{
			//s2 = s2 - min(arr[0] , arr[n - 1]);
			cout << "YES" << endl;
			continue;
		}
		else
		{
			cout << "NO" << endl;
			continue;	
		}

// 		//cout << len << endl;

// 		if(sum == s2)
// 		{
// 			// if(len == n)
// 			// {
// 			// 	cout << "YES" << endl;
// 			// 	continue;
// 			// }
// 			// else
// 			// {
// 			// 	cout << "NO" << endl;
// 			// 	continue;
// 			// }
// 			cout << "NO" << endl;
// 			continue;
// 		}

// // 		if(sum == s2)
// // 		{
// // 		//int i = 0;
// // 		int temp = 0;
// // 		int flag = 0;
// // 		for(int i = 0 ; i < n ; i++)
// // 		{
// // 			temp += arr[i];
// // 			if(temp == 0)
// // 			{
// // 				flag = 1;
// // 				break;
// // 			}
// // 		}

// // 		if(flag == 1)
// // 		{
// // 			cout << "NO" << endl;
// // 		}
// // 		else
// // 		{
// // 			cout << "YES" << endl;
// // 		}

// // 		flag = 0;
// // 		temp = 0;
// // 		for(int i = n - 1 ; i >= 0 ; i--)
// // 		{
// // 			temp += arr[i];
// // 			if(temp == 0)
// // 			{
// // 				flag = 1;
// // 				break;
// // 			}
// // 		}

// // 		if(flag == 1)
// // 		{
// // 			cout << "NO" << endl;
// // 		}
// // 		else
// // 		{
// // 			cout << "YES" << endl;
// // 		}
// // }

// 	if(sum > s2)
// 	{
// 		cout << "YES" << endl;
// 		continue;
// 	}
	
// 	else if(sum < s2)
// 	{
// 		cout << "NO" << endl;
// 		continue;
// 	}

	}


	return  0;
}