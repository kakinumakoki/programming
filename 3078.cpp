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
   int n,h,w;
   cin>>n>>h>>w;
   double p[h],q[w];
   rep(i,h) cin>>p[i];
   rep(i,w) cin>>q[i];
   char c[h+1][w+1];
   rep(i,h+1){
       rep(j,w+1){
           char l;
           cin>>l;
           if(l==' ') j--;
           else c[i][j]=l;
       }
   }
   rep(i,n){
       string s;
       double a,b;
       cin>>s>>a>>b;
   } 
}   