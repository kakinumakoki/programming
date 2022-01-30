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
    vector<P> fish(n);
    rep(i,n){
        cin>>fish[i].first>>fish[i].second;
    }
    sort(fish.begin(),fish.end());
    int s,ans=-1;
    rep(i,n){
        if(ans<fish[i].second){
            ans=fish[i].second;
            s=i;
        }
    }
    cout<<fish[s].first<<" "<<fish[s].second<<endl;
}
