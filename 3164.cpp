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
    int n;
    cin>>n;
    int now,ff;
    vector<int> p;
    rep(i,n){
        int a,t;
        cin>>a>>t;
        if(t==0) now=a*1.1;
        else now=a;
        if(i==0){
            ff=now;
        }
        else{
            if(now<ff) p.push_back(i+1);
        }
    }
    if(!p.empty()) {
        cout<<"Yes"<<endl;
        rep(i,p.size()) cout<<p[i]<<endl;
    }
    else cout<<"No"<<endl;
}

