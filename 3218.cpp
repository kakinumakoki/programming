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


int main()
{
    ll N,U,L,D;
    cin>>N>>U>>L>>D;
    ll ans=0,er=0,sol=0,flag=0;
    rep(i,N){
        int x;
        cin>>x;
        if(flag==0){
        if(x>=U) er++;
        else er=0;}

        else{
        if(x<=L) sol++;
        else sol=0;}

        if(sol>=D ) {
            er=0;
            sol=0;
            flag=0;
        }

        if(er==D&&flag==0) {
            ans++;
            flag=1;
        }
    }
    cout<<ans<<endl;
}