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
    double best=22;
    while(1){
        int n;
        cin>>n;
        if(n==0) break;
        int ans=0;
        rep(i,n){
          int x,y,h,w;
          cin>>x>>y>>h>>w;
          int s=x+y+h;
          if(s>160||w>25) continue;
          else if(s>140||w>20) ans+=1600;
          else if(s>120||w>15) ans+=1400;
          else if(s>100||w>10) ans+=1200;
          else if(s>80||w>5) ans+=1000;
          else if(s>60||w>2) ans+=800;
          else ans+=600;
       }
       cout<<ans<<endl;
    }
}