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
    int n,m;
    while(1){
    cin>>n>>m;
    if(n==0) break;
    vector<vector<vector<int>>> score(2,vector<vector<int>>(m,vector<int>(m,1<<29)));
    rep(i,m) score[0][i][i]=score[1][i][i]=0;
    rep(i,n){
        int a,b,c,t;
        cin>>a>>b>>c>>t;
        a--; b--;
        score[0][a][b]=score[0][b][a]=c;
        score[1][a][b]=score[1][b][a]=t;
    }
    rep(k,m){
        rep(i,m){
            rep(j,m){
                score[0][i][j]=min(score[0][i][j],score[0][i][k]+score[0][k][j]);
                score[1][i][j]=min(score[1][i][j],score[1][i][k]+score[1][k][j]);
            }
        }
    }
    int k;
    cin>>k;
    rep(i,k){
        int p,q,r;
        cin>>p>>q>>r;
        p--; q--;
        cout<<score[r][p][q]<<endl;
    }
    }
}