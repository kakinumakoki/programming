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

int H,W,N;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

struct za{
    int x;
    int y;
    int step;
};

void reset_sta(vector<vector<int>>&reach){
    rep(i,H){
        rep(j,W){
            reach[i][j]=0;
        }
    }
}

int main()
{
    cin>>H>>W>>N;
    vector<vector<int>>mp(H,vector<int>(W,-1));
    vector<vector<int>>reach(H,vector<int>(W,0));
    vector<za> dis(N+1);
    rep(i,H){
        rep(j,W){
            char c;
            cin>>c;
            if(c=='.') mp[i][j]=0;
            else if(c=='S') {
                mp[i][j]=0;
                dis[0].y=i;
                dis[0].x=j;
                dis[0].step=0;
            }
            else if(c=='X') mp[i][j]=-1;
            else {
                mp[i][j]=c-'0';
                dis[c-'0'].x=j; dis[c-'0'].y=i; dis[c-'0'].step=0;
            }            
        }
    }
    /*rep(i,H){
        rep(j,W){
            cout<<mp[i][j];
        }cout<<endl;
    }
    rep(i,N+1) cout<<dis[i].y<<":"<<dis[i].x<<endl;
    cout<<"OK"<<endl;*/
    int s_x,s_y;
    int sum=1e9+1,ans=0;
    for(int i=0;i<N;i++){
        queue<za> q;
        q.push(dis[i]);
        while(!q.empty()){
            za now=q.front();
            q.pop();
            reach[now.y][now.x]=1;
            if(mp[now.y][now.x]==i+1){
                sum=now.step;
                break;
            }
            int next_x,next_y,next_step=now.step+1;
            rep(i,4){
                next_x=now.x+dx[i];
                next_y=now.y+dy[i];
                if(0<=next_y&&next_y<H&&0<=next_x&&next_x<W&&reach[next_y][next_x]==0&&mp[next_y][next_x]!=-1)
                {
                    za nnn;
                    nnn.x=next_x;
                    nnn.y=next_y;
                    nnn.step=next_step;
                    q.push(nnn);
                }
            }
        }
        reset_sta(reach);
        ans+=sum;
        //cout<<ans<<endl;
        sum=1e9;
    }
    cout<<ans<<endl;
}