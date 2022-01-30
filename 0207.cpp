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


int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

struct masu{
    int x;
    int y;
};

int main(){
    int w,h;
    while(cin>>w>>h,w|h){
        int xs,ys,xg,yg;
        vector<vector<int>>mp(h,vector<int>(w,0));
        cin>>xs>>ys>>xg>>yg;
        xs--; ys--; xg--;yg--;
        int n;
        cin>>n;
        rep(i,n){
            int c,d,x,y;
            cin>>c>>d>>x>>y;
            x--; y--;
            if(d==0){
                for(int j=x;j<x+4;j++){
                    for(int k=y;k<y+2;k++){
                        mp[j][k]=c;
                    }
                }
            }
            else{
                for(int j=x;j<x+2;j++){
                    for(int k=y;k<y+4;k++){
                        mp[j][k]=c;
                    }
                }            
            }
        }
        int color=mp[xs][ys];
        vector<vector<bool>> reach(h,vector<bool>(w,false));
        int flag=0;
        queue<masu> nn;
        masu now;
        now.x=xs; now.y=ys;
        nn.push(now);
        while(!nn.empty()){
            now=nn.front();
            nn.pop();
            reach[now.x][now.y]=true;
            if(now.x==xg&&now.y==yg) {
                flag=1;
                break;
            }
            rep(i,4){
                int next_x=now.x+dx[i],next_y=now.y+dy[i];
                if(0<=next_x&&next_x<w&&0<=next_y&&next_y<h&&reach[next_x][next_y]==false){
                    if(mp[next_x][next_y]==color){
                        masu a;
                        a.x=next_x; a.y=next_y;
                        nn.push(a);
                    }
                }
            }
        }
        if(flag==1) cout<<"OK"<<endl;
        else cout<<"NG"<<endl;
    }
}