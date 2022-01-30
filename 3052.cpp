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
   ll a,b,x;
   cin>>a>>b>>x;
   ll ans;
   if(x<a) {
       ans=x%1000000007;
       cout<<ans<<endl;
   }
   else{
       ans=(x-a)/(a-b)+1;
       ans%=1000000007;
       cout<<(x%1000000007+b%1000000007*ans%1000000007)%1000000007<<endl;
   }
}   