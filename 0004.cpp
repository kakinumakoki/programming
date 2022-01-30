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
    double a,b,c,d,e,f;
    while(cin>>a>>b>>c>>d>>e>>f){
        double x,y;
        x=(c*e-f*b)/(a*e-d*b);
        y=(c*d-f*a)/(b*d-a*e);
        if(x==-0) x=0;
        if(y==-0) y=0;
        cout<<std::fixed << std::setprecision(3) << x ;
        cout<<" ";
        cout<<std::fixed << std::setprecision(3) << y << endl;
    }
}