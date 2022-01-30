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
    while(1){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if(a==0) break;
        int na,nb,nc;
        cin>>na>>nb>>nc;
        int ans;
        if(nc>=d) ans=a*na+b*nb+e*nc;
        else{
            if(nc+nb>=d) ans=a*na+b*(nc+nb-d)+e*d;
            else if(na+nb+nc>=d) ans=a*(nc+nb+na-d)+e*d;
            else ans=e*d;
            ans=min(ans,a*na+b*nb+c*nc);
        }
        cout<<ans<<endl;
    }
}