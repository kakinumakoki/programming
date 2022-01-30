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

int H,W;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
void cha(vector<vector<char>>&tr,int x,int y,char now){
    tr[x][y]='!';
    rep(i,4){
        int next_x=x+dx[i],next_y=y+dy[i];
        if(0<=next_x&&next_x<H&&0<=next_y&&next_y<W){
            if(tr[next_x][next_y]==now) cha(tr,next_x,next_y,now);
        }
    }
}

int main()
{
   while(1){
        cin>>H>>W;
        if(H==0) break;
        vector<vector<char>> tr(H,vector<char>(W));
        rep(i,H){
            rep(j,W) {
                //cout<<i<<j<<endl;
                cin>>tr[i][j];
            }
        }
        int ans=0;
        rep(i,H){
            rep(j,W){
                if(tr[i][j]=='!') continue;
                char now=tr[i][j];
                ans++;
                cha(tr,i,j,now);
            }
        }
        cout<<ans<<endl;
   }
}