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
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll=long long;
using P=pair<int,int>;
using P_S=pair<int,string>;
using P_D=pair<double,int>;
using T=tuple<int,int,char,ll,string>;
struct M{
    int x;
    int y;
};
queue<M>next_V;
int H,W;
int flag=0;
int yoko[4]={6,3,1,4};
int tate[4]={6,5,1,2};
void search(int n_h,int n_w,vector<vector<int>> s,int soko){
    if(n_h==H-1&&n_w==W-1)  flag=1; return;
    M a=next_V.front();
    next_V.pop();
}

int main()
{
    cin>>H>>W;
    vector<vector<int>> s(H,vector<int>(W));
    rep(i,H){
        rep(j,W){
            char n;
            cin>>n;
            if(n=='#') s[i][j]=0;
            else s[i][j]=n-'0';
        }
    }
    M kk;
    kk.x=0;
    kk.y=0;
    next_V.push(kk);
    search(0,0,s,6);
}