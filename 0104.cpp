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

int main()
{
    int H,W;
    while(1){
        cin>>H>>W;
        if(H==0&&W==0) break;
        char masu[H][W];
        rep(i,H){
            rep(j,W) cin>>masu[i][j];
        }
        int x=0,y=0;
        int seen[H][W];
        rep(i,H){
            rep(j,W) seen[i][j]=0;
        }
        while(1)
        {
            //cout<<x<<" "<<y<<endl;
            if(seen[x][y]==1){
                cout<<"LOOP"<<endl;
                break;
            }
            seen[x][y]=1;
            if(masu[x][y]=='.'){
                cout<<y<<" "<<x<<endl;
                break;
            }
            if(masu[x][y]=='>') y++;
            if(masu[x][y]=='<') y--;
            if(masu[x][y]=='v') x++;
            if(masu[x][y]=='^') x--;
        }

    }
}