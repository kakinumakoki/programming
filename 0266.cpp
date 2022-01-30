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

int dx[12]={2,-2,0,0,2,-2,2,-2,1,-1,-1,1};
int dy[12]={0,0,2,-2,1,1,-1,-1,2,-2,2,-2};

int sx[9]={-1,0,1,-1,0,1,-1,0,1};
int sy[9]={1,1,1,0,0,0,-1,-1,-1};

int main(){
    vector<vector<int>> G(6,vector<int>(2,-1));
    G[0][0]=1;
    G[0][1]=2;
    G[1][1]=3;
    G[2][0]=1;
    G[3][0]=4;
    G[3][1]=5;
    G[4][0]=5;
    G[4][1]=2;
    G[5][0]=2;
    G[5][1]=1;
    while(1){
        string s;
        cin>>s;
        if(s=="#") break;
        int now=0;
        int flag=1;
        rep(i,s.size()){
            int code=s[i]-'0';
            now=G[now][code];
            if(now==-1){
                flag=0;
                break;
            }
        }
        if(flag==0||now!=5) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}
