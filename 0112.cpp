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
    int N;
    while(1){
    cin>>N;
    if(N==0) break;
    vector<ll> time(N);
    rep(i,N) cin>>time[i];
    sort(time.begin(),time.end());
    ll ans=0,now=0;
    for(int i=1;i<N;i++){
        now+=time[i-1];
        ans+=now;
    }
    cout<<ans<<endl;
    }
}