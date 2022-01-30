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

struct logg{
    int ss;
    int pp;
};

int main(){
    while(1)
    {
       int n,m;
       cin>>n>>m;
       if(n==0&&m==0) break;
       int r;
       vector<vector<int>>PC(n,vector<int>(721,-1));
       vector<logg> student(m);
       cin>>r;
       rep(i,r){
           int t,a,b,s;
           cin>>t>>a>>b>>s;
           t=t-540;
           a=a-1;
           b=b-1;
           if(s==1){
               student[b].ss=t;
               student[b].pp=a;
           }
           else{
               for(int j=student[b].ss;j<=t;j++) PC[student[b].pp][j]=b;
           }
       }
       int q;
       cin>>q;
       rep(i,q){
           int t_s,t_e,b;
           cin>>t_s>>t_e>>b;
           t_s-=540;
           t_e-=540;
           b=b-1;
           int ans=0;
           for(int k=0;k<n;k++){
           for(int j=t_s;j<=t_e;j++){
               if(PC[k][j]==b) ans++;
           }
           }
           cout<<ans<<endl;
       }
    }
}