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
    int n,m;
    cin>>n>>m;
    int mmm=m,flag=0;
    rep(i,n){
        int a,b;
        cin>>a>>b;
         m=m+a-b;
         if(m<0) flag=1;
         if(m>mmm) mmm=m;
    }
    if(flag==1) cout<<0<<endl;
    else cout<<mmm<<endl;
}

