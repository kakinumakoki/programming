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

ll gcd(ll x,ll y){
    x=abs(x);
    y=abs(y);
    if(x<y) swap(x,y);
    if(y==0) return x;
    else return gcd(y,x%y);
}

ll gcd_m(ll x,ll y){
    return (x*y)/gcd(x,y);
}

int main()
{
    ll a,b;
    while(cin>>a>>b){
    cout<<gcd(a,b)<<" "<<gcd_m(a,b)<<endl;}
}
