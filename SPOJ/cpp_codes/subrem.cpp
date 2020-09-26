#include<iostream>
#include<vector>
using namespace std;
long long int badnode(long long int pos,long long int a[],long long int check[],vector<long long int>tree[],long long int k){
    if(check[pos]==0){
        if(a[pos]<0 && a[pos]+k<=0){
           return -1*k;
        }
        else
          return a[pos];
    }
    else{
        long long int count=a[pos];
        for(long long int i=0;i<tree[pos].size();i++){
           count=count+badnode(tree[pos].at(i),a,check,tree,k);
        }
        if(count<0 && count+k<=0){
              count=-1*k;
        }
        return count;
    }
}

int main(){
   int t;
   cin>>t;
   for(int z=0;z<t;z++){
       long long int n,x;
       cin>>n>>x;
       long long int a[n];
       for(long long int i=0;i<n;i++)
          cin>>a[i];
       vector<long long int>tree[n];
       long long int check[n]={0};
       for(long long int i=0;i<n-1;i++){
          long long int r,l;
          cin>>r>>l;
          tree[r-1].push_back(l-1);
          check[r-1]++;
       }
       if(n==1){
          if(a[0]<0 && a[0]+x<=0){
            cout<<-1*x<<endl;
            continue;
          }
          else{
            cout<<a[0]<<endl;
            continue;
          }
       }
       long long int c=badnode(0,a,check,tree,x);
       cout<<c<<endl;
   }
}
