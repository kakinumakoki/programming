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
    int N,M,C;
    cin>>N>>M>>C;
    int l[C];
    vector<P> ball;
    rep(i,C) cin>>l[i];
    rep(i,N){
        P b;
        cin>>b.second>>b.first;
        ball.push_back(b);
    }
    sort(ball.begin(),ball.end());
    ll ans=0;
    int num=0,now=ball.size();
    for(int i=N-1;i>=0;i--){
        if(!l[ball[i].second-1]) continue;
        ans+=ball[i].first;
        l[ball[i].second-1]--;
        M--;
        if(!M) break;
    }
    cout<<ans<<endl;
}
