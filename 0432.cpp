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
    char s[N][N],ans1[N][N],ans2[N][N],ans3[N][N];
    rep(i,N){
        rep(j,N) cin>>s[i][j];
    }
    int Q,sum=0;
    cin>>Q;
    rep(i,Q){
        int r;
        cin>>r;
        sum=sum+r;
        if(sum<0) sum=3;
        sum%=4;
    }
    if(sum>0){
        rep(i,N){
            rep(j,N) ans1[j][N-i-1]=s[i][j];
         }
    }
    if(sum>1){
        rep(i,N){
            rep(j,N) ans2[j][N-i-1]=ans1[i][j];
         }
    }
    if(sum>2){
        rep(i,N){
            rep(j,N) ans3[j][N-i-1]=ans2[i][j];
         }
    }

    if(sum==0){
        rep(i,N){
            rep(j,N) cout<<s[i][j];
            cout<<endl;
        }
    }
    else if(sum==1){
        rep(i,N){
            rep(j,N) cout<<ans1[i][j];
            cout<<endl;
        }
    }
    else if(sum==2){
        rep(i,N){
            rep(j,N) cout<<ans2[i][j];
            cout<<endl;
        }
    }
    else if(sum==3){
        rep(i,N){
            rep(j,N) cout<<ans3[i][j];
            cout<<endl;
        }
    }
}