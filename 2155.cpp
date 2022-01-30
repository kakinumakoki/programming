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

struct pac{
    int s;
    int e;
};

int main(){
    while(1){
        int N,M;
        cin>>N>>M;
        if(N==0) break;
        vector<int> infected(N,0);
        vector<pac> order(M);
        rep(i,M){
            int t,st,d;
            cin>>t>>st>>d;
            t--; st--; d--;
            pac a;
            a.s=st; a.e=d;
            order[t]=a;
        }
        /*rep(i,M){
            cout<<i<<" "<<order[i].s<<" "<<order[i].e<<endl;
        }*/
        infected[0]=1;
        rep(i,M){
            if(infected[order[i].s]==1) infected[order[i].e]=1;
        }
        int ans=0;
        rep(i,N){
            if(infected[i]==1) ans++;
        }
        cout<<ans<<endl;
    }
}