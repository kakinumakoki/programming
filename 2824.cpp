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
    while(1)
    {
       int T,D,L;
       cin>>T>>D>>L;
       if(T==0) break;
       int x,ans=0,time=0;
       rep(i,T){
           cin>>x;
           time--;
           if(x>=L){
               time=D;
           }
           if(time>0&&i<T-1) ans++;
       }
       cout<<ans<<endl;
    }
}