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



int main(){
    while(1){
       int L;
       cin>>L;
       if(L==0) break;
       int ans=0,sum=0;
       rep(i,12)
       {
           int M,N;
           cin>>M>>N;
           sum+=M-N;
           if(ans==0&&sum>=L) ans=i+1;
       }
       if(ans==0) cout<<"NA"<<endl;
       else cout<<ans<<endl;
    }
}