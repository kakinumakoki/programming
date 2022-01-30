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
    while(1){
        cin>>n;
       if(n==0) break;
       map<int,int>c;
       rep(i,n){
           int a;
           cin>>a;
           c[a]++;
       }
       int ans=-1;
       for(auto m:c){
           //cout<<m.second<<endl;
           if(m.second*2>n){
           ans=m.first;
           break;
           }
       }
       if(ans==-1) cout<<"NO COLOR"<<endl;
       else cout<<ans<<endl;
    }
}
