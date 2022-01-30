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
    while(1)
    {
        int m,n,p,ans=0;
        cin>>m>>n>>p;
        if(m==0&&n==0&&p==0) break;
        m=m+1;
        vector<int> use(m,0);
        use[p]=1;
        rep(i,n){
            int a,b;
            cin>>a>>b;
            if(use[a]==1) use[b]=1;
            if(use[b]==1) use[a]=1;
        }
        rep(i,m) if(use[i]==1) ans++;
       cout<<ans<<endl;
    }
}