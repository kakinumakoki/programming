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
    int r[N];
    rep(i,N) cin>>r[i];
    int r_max=r[N-1],ans=1;
    for(int i=N-2;i>=0;i--){
        if(r[i]>r_max) {ans++; r_max=r[i];}
    }
    cout<<ans<<endl;
}