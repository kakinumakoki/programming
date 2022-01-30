#include<iostream>
#include<algorithm>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<bitset>
#include<vector>
#include<string>
#include <iomanip>
#include <deque>
#include<list>
#include<cmath>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll=long long;
using P=pair<int,int>;
using P_S=pair<int,string>;
using P_D=pair<double,int>;
using T=tuple<int,int,char,ll,string>;


bool all_seen(vector<bool>seen,int n){
    rep(i,n){
        if(seen[i]==false) return false;
    }
    return true;
}

int main()
{
   int n,m;
   cin>>n>>m;
   vector<vector<int>>G(n,vector<int>(n,-1));
   rep(i,m){
       int a,b,c,d;
       scanf("%d,%d,%d,%d",&a,&b,&c,&d);
       a--; b--;
       G[a][b]=c;
       G[b][a]=d;
   }
   int s,g,V,P;
   scanf("%d,%d,%d,%d",&s,&g,&V,&P);
   s--; g--;
   vector<bool> seen(n,false);
   seen[s]=true;
   vector<int> cost(n,30001);
   int now=s;
   cost[s]=0;
   while(!all_seen(seen,n)){
       rep(i,n){
          if(G[now][i]!=-1) cost[i]=min(cost[i],cost[now]+G[now][i]);
       }
       int m_cost=30001,next;
       rep(i,n){
           if(cost[i]<m_cost&&seen[i]==false){
               next=i;
               m_cost=cost[i];
           }
       }
       seen[next]=true;
       now=next;
   }
   /*rep(i,n) cout<<cost[i]<<" ";
   cout<<endl;*/
   int sum=cost[g];
   rep(i,n) {
       seen[i]=false;
       cost[i]=30001;
   }
   now=g;
   cost[g]=0;
   seen[g]=true;
   while(!all_seen(seen,n)){
       rep(i,n){
          if(G[now][i]!=-1) cost[i]=min(cost[i],cost[now]+G[now][i]);
       }
       int m_cost=30001,next;
       rep(i,n){
           if(cost[i]<m_cost&&seen[i]==false){
               next=i;
               m_cost=cost[i];
           }
       }
       seen[next]=true;
       now=next;
   }
   sum+=cost[s];
   cout<<V-P-sum<<endl;
}