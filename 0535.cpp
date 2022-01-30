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

int dy[4]={1,-1,0,0}, dx[4]={0,0,1,-1};
int ice[90][90];
int N,M,ans;

void dfs(int y,int x,int s){
    ans=max(ans,s);
    rep(i,4){
        int next_x=x+dx[i],next_y=y+dy[i];
        if(0<=next_x&&next_x<M&&0<=next_y&&next_y<N&&ice[next_y][next_x]==1){
            ice[next_y][next_x]=0;
            dfs(next_y,next_x,s+1);
            ice[next_y][next_x]=1;
        }
    }
}

int main(){
    while(1){
        cin>>M>>N;
        if(N==0&&M==0) break;
        rep(i,N){
            rep(j,M) cin>>ice[i][j];
        }
        ans=0;
        rep(i,N){
            rep(j,M){
                if(ice[i][j]==0) continue;
                dfs(i,j,0);
            }
        }
        cout<<ans<<endl;
    }
}