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

int w,h;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

struct za{
    int x;
    int y;
    int step;
};

void reset(vector<vector<int>>&reach){
    rep(i,h){
        rep(j,w){
            reach[i][j]=0;
        }
    }
}


int main(){
    while(1){
        cin>>w>>h;
        if(w==0) break;
        int c[h][w],cnt=0;
        za start_robot;
        rep(i,h){
            rep(j,w){
                char s;
                cin>>s;
                if(s=='.') c[i][j]=0;
                else if(s=='*') {
                    c[i][j]=1;
                    cnt++;
                }
                else if(s=='x') c[i][j]=-1;
                else{
                    c[i][j]=0;
                    start_robot.x=j;
                    start_robot.y=i;
                    start_robot.step=0;
                }
            }
        }
        int ans=0;
        vector<vector<int>> reach(h,vector<int>(w,0));
        queue<za>robot;
        robot.push(start_robot);
        while(cnt!=0){
            /*rep(i,h){
                rep(j,w)cout<<reach[i][j];
                cout<<endl;
            }
            cout<<endl;*/
            if(robot.empty()) break;
            za now=robot.front();
            reach[now.y][now.x]=1;
            robot.pop();
            if(c[now.y][now.x]==1){
                cnt--;
                c[now.y][now.x]=0;
                ans+=now.step;
                //cout<<now.y<<":"<<now.x<<":"<<now.step<<endl;
                now.step=0;
                reset(reach);
                while(!robot.empty()) robot.pop();
                robot.push(now);
            }
            else{
            rep(i,4){
                za next;
                next.x=now.x+dx[i],next.y=now.y+dy[i],next.step=now.step+1;
                if(0<=next.x&&next.x<w&&0<=next.y&&next.y<h&&reach[next.y][next.x]==0&&c[next.y][next.x]!=-1){
                    robot.push(next);
                }
            }
                //cout<<robot.size()<<endl;
            }
        }
        if(cnt>0) ans=-1;
        cout<<ans<<endl;
    }
}