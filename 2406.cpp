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
    int N,T,E;
    cin>>N>>T>>E;
    int x[N];
    rep(i,N) cin>>x[i];
    int a=T-E,A=T+E,ans,flag=0;
    rep(i,N){
        int n=T/x[i];
        if(a<=x[i]*n&&x[i]*n<=A) {
            flag=1;
            ans=i;
        }
        else if(a<=x[i]*(n-1)&&x[i]*(n-1)<=A){
            flag=1;
            ans=i;
        }
        else if(a<=x[i]*(n+1)&&x[i]*(n+1)<=A){
            flag=1;
            ans=i;
        }
        if(flag==1) break;
    }
    if(flag==1) cout<<ans+1<<endl;
    else cout<<"-1"<<endl;
}
