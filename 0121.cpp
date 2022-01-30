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

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int H=2,W=4;

void dfs(){
    
}

int main(){
    string st;
    while(getline(cin,st)){
        vector<int> num;
        rep(i,st.size()){
            if(st[i]!=' ') num.push_back(st[i]-'0');
        }
       vector<vector<int>>puzzle(H,vector<int>(W));
       rep(i,8) {
           if(i<W) puzzle[0][i%4]=num[i];
           else puzzle[1][i%4]=num[i];
       }
       dfs();
    }
}