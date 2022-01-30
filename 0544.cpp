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
#include <sstream>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll=long long;
using P=pair<int,int>;
using P_S=pair<int,string>;
using P_D=pair<double,int>;
using T=tuple<int,int,char,ll,string>;



int main(){
    while(1)
    {
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0) break;
        int masu[n+1],sugo[m];
        for(int i=1;i<n+1;i++) cin>>masu[i];
        rep(i,m) cin>>sugo[i];
        int ans,now=1;
        rep(i,m){
            now+=sugo[i];
            now+=masu[now];
            if(now<1) now=1;
            if(now>=n) {
                ans=i+1;
                break;
            }
        } 
        cout<<ans<<endl;
    }
}