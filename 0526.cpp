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

int main(){
    int n,k;
    while(1){
        cin>>n>>k;
        if(n==0) break;
        vector<vector<int>>G(n,vector<int>(n,-1));
        rep(i,k){
            int order;
            cin>>order;
            if(order==1){
                int c,d,e;
                cin>>c>>d>>e;
                c--; d--;
                if(G[c][d]==-1){
                  G[c][d]=e;
                  G[d][c]=e;
                }
                else if(G[c][d]>e){
                  G[c][d]=e;
                  G[d][c]=e;                }
            }
            else{
                int a,b;
                cin>>a>>b;
                a--; b--;
                vector<bool> seen(n,false);
                seen[a]=true;
                vector<int> cost(n,1000000000);
                int now=a,count=0;
                cost[a]=0;
                while(!all_seen(seen,n)){
                    if(count==n) break;
                    rep(i,n){
                        if(G[now][i]!=-1) cost[i]=min(cost[i],cost[now]+G[now][i]);
                    }
                    int m_cost=1000000000,next=a;
                    rep(i,n){
                        if(cost[i]<m_cost&&seen[i]==false){
                            next=i;
                            m_cost=cost[i];
                        }
                    }
                    seen[next]=true;
                    now=next;
                    count++;
                }
                if(cost[b]==1000000000) cout<<-1<<endl;
                else cout<<cost[b]<<endl;      
            }
        }
    }
}