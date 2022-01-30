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
   int w,n;
   cin>>w>>n;
   vector<int> H(w+1);
   rep(i,w+1) H[i]=i;
   rep(i,n){
       int a,b;
       char c;
       cin>>a>>c>>b;
       swap(H[a],H[b]);
   }
   for(int i=1;i<=w;i++) cout<<H[i]<<endl;
}