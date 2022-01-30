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

int main(){
    int dp[5001];
    int g[]={200,300,500,1000,1200,1500};
    int p[]={380,550,850,1520,1870,2244};
    rep(i,5001) dp[i]=380*25+1;
    dp[0]=0;
    rep(i,6){
        rep(j,5001){
            if(j+g[i]>5000) continue;
            dp[j+g[i]]=min(dp[j+g[i]],dp[j]+p[i]);
        }
    }
    while(1){
        int n;
        cin>>n;
        if(n==0) break;
        cout<<dp[n]<<endl;
    }
}
