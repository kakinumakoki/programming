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
    int x,y,s;
    int p[10][10]={0};
    while(scanf("%d,%d,%d",&x,&y,&s))
    {
        if(s>=1){
            p[x][y]++;
            if(x-1>=0) p[x-1][y]++;
            if(x+1<=9) p[x+1][y]++;
            if(y-1>=0) p[x][y-1]++;
            if(y+1<=9) p[x][y+1]++;
        }
        if(s>=2){
            if(x+1<=9&&y+1<=9) p[x+1][y+1]++;
            if(x+1<=9&&y-1>=0) p[x+1][y-1]++;
            if(x-1>=0&&y+1<=9) p[x-1][y+1]++;
            if(x-1>=0&&y-1>=0) p[x-1][y-1]++;
        }
        if(s>=3){
            if(x+2<=9) p[x+2][y]++;
            if(x-2>=0) p[x-2][y]++;
            if(y+2<=9) p[x][y+2]++;
            if(y-2>=0) p[x][y-2]++;
        }
    }
    int zero=0,mm=-1;
    rep(i,10){
        rep(j,10){
            if(p[i][j]==0) zero++;
            if(p[i][j]>mm) mm=p[i][j];
        }
    }
    cout<<zero<<endl;
    cout<<mm<<endl;
}