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
    double x,h;
    while(1){
        cin>>x>>h;
        if(x==0&&h==0) break;
        double y=sqrt(pow(x/2,2)+pow(h,2));
        double ans=x*x+((x*y)/2)*4;
		cout.precision(10);
        cout<<ans<<endl;
    }
}