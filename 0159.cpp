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
    double best=22;
    while(1){
        int n;
        cin>>n;
        if(n==0) break;
        vector<P_D>ans;
        rep(i,n){
           int p,w;
           double h;
           cin>>p>>h>>w; 
           h=h/100;
           double BMI=(double)w/(h*h);
           double B=abs(BMI-best);
           P_D a;
           a.first=B; a.second=p;
           ans.push_back(a);
       }
       sort(ans.begin(),ans.end());
       cout<<ans[0].second<<endl;
    }
}