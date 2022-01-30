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
   while(1)
   {
       int w;
       cin>>w;
       if(w==-1) break;
       int ans=0;
       if(w<=10) ans+=1150;
       else if(w<=20) ans+=1150+125*(w-10);
       else if(w<=30) ans+=1150+125*10+140*(w-20);
       else if(w>30) ans+=1150+125*10+140*10+160*(w-30);
       cout<<4280-ans<<endl;
   }
}