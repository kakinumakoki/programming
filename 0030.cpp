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

int n,s,ans;


void dfs(int d,int sum,int count)
{
    if(sum==s){
        ans++;
        return;
    }
    if(sum>s||count==n) return;
    count++;
    rep(i,10){
        dfs(i,sum+d,count);
    }
}

int main(){
    while(1){
        cin>>n>>s;
        if(n==0) break;
        ans=0;
        rep(i,10){
            dfs(i,0,0);
        }
        cout<<ans<<endl;
        ans=0;
    }
}

