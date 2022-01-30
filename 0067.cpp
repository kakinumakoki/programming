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

 int di[]={1,0,-1,0};
 int dj[]={0,1,0,-1};

void dfs(int x,int y,vector<string> &m){
    m[x][y]='0';
    rep(i,4){
        int next_x=x+di[i];
        int next_y=y+dj[i];
        if(next_x<0||next_x>=12||next_y<0||next_y>=12) continue;
        if(m[next_x][next_y]=='1'){
            dfs(next_x,next_y,m);
        }
    }
}

int main()
{
    while(1){
        vector<string> m(12);
        rep(i,12) cin>>m[i];
        if(m[11].size()!=12) break;
        int ans=0;
        rep(i,12){
            rep(j,12){
                if(m[i][j]=='1'){
                    ans++;
                    dfs(i,j,m);
                }
            }
        }
        cout<<ans<<endl;
    }
}