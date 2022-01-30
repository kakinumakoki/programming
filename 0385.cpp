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
    int N;
    cin>>N;
    vector<int>a(N),b(N);
    rep(i,N) {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b.begin(),b.end());
    int Q,ans=0,ok=0;
    cin>>Q;
    rep(i,Q){
        int x,y;
        cin>>x>>y;
        x--; y--;
        if(ok==0){
            int flag=0;
            rep(j,N){
                if(a[j]!=b[j]) {
                    flag=1;
                    break;
                }
            }
            if(flag==0)ok=1;
        }
        if(ok==0)ans++;
        swap(a[x],a[y]);
    }
    if(ok==0){
        int flag=0;
        rep(i,N){
            if(a[i]!=b[i]){
                flag=1;
                break;
            }
        }
        if(flag==1) ok=1;
    }
    if(ok==0) ans=-1;
    cout<<ans<<endl;
}