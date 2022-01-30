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
       vector<int> tt(n+m+1);
       tt[0]=0;
       for(int i=1;i<n+m+1;i++) cin>>tt[i];
       sort(tt.begin(),tt.end());
       int ans=0;
       for(int i=1;i<n+m+1;i++){
           ans=max(ans,tt[i]-tt[i-1]);
       }
       cout<<ans<<endl;
    }
}