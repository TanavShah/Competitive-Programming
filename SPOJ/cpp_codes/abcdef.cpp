//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long search(map<long long,long long> arr, long long l, long long r, long long x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
	map<long long, long long> :: iterator itr;
	itr = arr.begin();
	for(long long i = 0 ; i < mid - 1 ; i++)
	{
	    itr++;
	}
        if (itr->first == x) 
            return mid+1; 
        if ((itr->first) > x) 
            return search(arr, l, mid - 1, x);  
        return search(arr, mid + 1, r, x); 
    } 
    return -1; 
}

int main()
{
  //  cout << 1 << endl;
    
    int n;
    scanf("%d" , &n);
    int inp[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d" , &inp[i]);
    }
   // vector<long long> v1;
   // vector<long long> v2;
    map<long long, long long> m1;
    map<long long,long long> m2;
    for(int a = 0 ; a < n ; a++)
    {
	for(int b = 0 ; b < n ; b++)
	{
	    for(int c = 0 ; c < n ; c++)
	    {
		//v1.push_back((inp[a]*inp[b]) + inp[c]);
		m1[(inp[a]*inp[b]) + inp[c]]++;
	    }
	}
    }
/*    
    for(auto i = m1.begin() ; i != m1.end() ; i++)
    {
	cout << i->first << " " << i->second << endl;
    }
  */  
    for(int d = 0 ; d < n ; d++)
    {
	if(inp[d] != 0)
	{
	    for(int e = 0 ; e < n ; e++)
	    {
		for(int f = 0 ; f < n ; f++)
		{	
		    //v2.push_back(inp[d]*(inp[e] + inp[f]));
		    m2[inp[d]*(inp[e] + inp[f])]++;
		}
	    }
	}
    }
    /*
    cout << endl;
    for(auto i = m2.begin() ; i != m2.end() ; i++)
    {
	cout << i->first << " " << i->second << endl;
    }
   cout << endl;       
   */
//    sort(v1.begin() , v1.end());
    long long count = 0;
  //  long long c = 0;
    for(auto i = m2.begin() ; i != m2.end() ; i++)
    {
//	cout << i->first << endl;
//	c++;
    if(search(m1,0,(m1.size()),i->first) != -1)
    {
	//count++;
//	cout << i->first << endl;
//	cout <<   (i->second)*(m1[i->first]) << endl;       
        count += (i->second)*(m1[i->first]);
    }
    }
//    cout << c << endl;
    printf("%lld \n" , count);
    return 0;
}
