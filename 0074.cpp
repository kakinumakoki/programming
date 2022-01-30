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
        int T,H,S;
        cin>>T>>H>>S;
        if(T==-1) break;
        int re=120*60-(T*60*60+H*60+S);
        int ans=re*3;
        printf("%02d:%02d:%02d\n",re/3600,re%3600/60,re%60);
        printf("%02d:%02d:%02d\n",ans/3600,ans%3600/60,ans%60);
    }
}