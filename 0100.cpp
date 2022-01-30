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
    while(1){
        cin>>n;
        if(n==0) break;
        map<int,ll> m;
        vector<int> l;
        rep(i,n){
            int e;
            ll p,q;
            cin>>e>>p>>q;
            if(!m.count(e)){
                m[e]=p*q;
                l.push_back(e);
            }
            else m[e]+=(p*q);
        }
        sort(l.begin(),l.end());
        int flag=0;
        rep(i,l.size()){
        if(m[l[i]]>=1000000) {
            flag=1;
            cout<<l[i]<<endl;
        }
        }
        if(flag==0) cout<<"NA"<<endl;
    }
}