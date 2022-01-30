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
   int a,b,c,max_m=-1;
   cin>>a>>b>>c;
   max_m=max(max_m,a);
   max_m=max(max_m,b);
   max_m=max(max_m,c);
   if(max_m==a) cout<<"A"<<endl;
   else if(max_m==b) cout<<"B"<<endl;
   else cout<<"C"<<endl;
}   