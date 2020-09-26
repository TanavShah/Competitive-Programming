//                        Saheb Aaje Su Karvana?

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long ans = 0;

int method(string x , string y)
{
    if(x == y)
	return ans;
    if((x.at(0) >= 104) && (x.at(0) <= 97) && (x.at(1) <= '1') && (x.at(1) >= '8'))
	return 21474836;
    ans++;
//    char a1[2],a2[2],a3[2],a4[2],a5[2],a6[2],a7[2],a8[2];
    char a1[2] = {(++x.at(0)) , ++(++x.at(1))};
    string s1 = "";
    s1 += a1[0];
    s1 += a1[1];
    char a2[2] = {(++x.at(0)) , --x.at(1)};
    string s2 = "";
    s2 += a2[0];
    s2 += a2[1];
    char a3[2] = {x.at(0) , --(--x.at(1))};
    string s3 = "";
    s3 += a3[0];
    s3 += a3[1];
    char a4[2] = {(--x.at(0)) , (--x.at(1))};
    string s4 = "";
    s4 += a4[0];
    s4 += a4[1];
    char a5[2] = {--(--x.at(0)) , (x.at(1))};
    string s5 = "";
    s5 += a5[0];
    s5 += a5[1];
    char a6[2] = {(--x.at(0)) , (++x.at(1))};
    string s6 = "";
    s6 += a6[0];
    s6 += a6[1];
    char a7[2] = {(x.at(0)) , ++(++x.at(1))};
    string s7 = "";
    s7 += a7[0];
    s7 += a7[1];
    char a8[2] = {(++x.at(0)) , (++x.at(1))};
    string s8 = "";
    s8 += a8[0];
    s8 += a8[1];
    return (min(method(s1 , y) , min(method(s2 , y) , min(method(s3 , y) , min(method(s4 , y) ,
    min(method(s5 , y) , min(method(s6 , y) , min(method(s7 , y) , min(method(s8 , y))))))))));
}

int main()
{
    int t;
    scanf("%d" , &t);
    for(int aa = 0 ; aa < t ; aa++)
    {
	string st,en;
	cin >> st >> en;
	int p = method(st , en);
	printf("%d" , p);
	ans = 0;
    }
    return 0;
}
