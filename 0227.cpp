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
    int n,m;
    while(1){
        cin>>n>>m;
        if(n==0) break;
        vector<int>p(n);
        rep(i,n) cin>>p[i];
        sort(p.begin(),p.end());
        int ans=0,count=0;
        for(int i=n-1;i>=0;i--){
            count++;
            if(count%m!=0) ans+=p[i];
        }
        cout<<ans<<endl;
    }
}
