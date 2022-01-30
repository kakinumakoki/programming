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
    int n;
    cin>>n;
    int ans=100000;
    rep(i,n){
        ans=ans*1.05;
        int b=ans%1000;
        ans-=b;
        if(b>0){
            ans+=1000;
        }
    }
    cout<<ans<<endl;
}