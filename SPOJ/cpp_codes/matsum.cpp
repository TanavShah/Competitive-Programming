//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    scanf("%lld" , &t);
    while(t--)
    {
	int n;
	scanf("%d" , &n);
	string set = "SET";
	string sum = "SUM";
	string end = "END";
	map<pair<long long , long long> , long long> m;
//	vector<long long> x;
//	vector<long long> y;
//	vector<long long> val;
	while(1)
	{
	    string inp;
	    cin >> inp;
	    if(inp == end)
	    {
		cout << endl;
		break;
	    }
	    if(inp == set)
	    {
		long long a,b,value;
		scanf("%lld %lld %lld", &a , &b , &value);
		pair<long long , long long> p;
		p = make_pair(a , b);
		m[p] = value;
//		x.push_back(a);
//		y.push_back(b);
//		val.push_back(value);
	    }
	    if(inp == sum)
	    {
		long long x1,y1,x2,y2;
		scanf("%lld %lld %lld %lld" , &x1 , &y1 , &x2 , &y2);
		long long ans = 0;
		for(auto i = m.begin() ; i != m.end() ; i++)
		{
		    if((x1 <= (i -> first).first) && (x2 >= (i -> first).first) && (y1 <= (i ->
			first).second) && (y2 >= (i -> first).second))
		    {
			ans += (i -> second);
		    }
		}
		printf("%lld \n" , ans);
	    }

	}
	m.clear();
//	x.clear();
//	y.clear();
//	val.clear();
    }
    return 0;
}
