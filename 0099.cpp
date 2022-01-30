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
    int n,q;
    cin>>n>>q;
    priority_queue<P>fish;
    rep(i,n){
        P f;
        f.first=0;
        f.second=i;
        fish.push(f);
    }
    rep(i,q){
        int a,v;
        cin>>a>>v;
        fish[a-1]+=v;
        cout<<fish.first.top()<<endl;
    }
}