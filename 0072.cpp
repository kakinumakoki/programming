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

class UnionFind {
public:
    vector <ll> par; // 各元の親を表す配列
    vector <ll> siz; // 素集合のサイズを表す配列(1 で初期化)
    // Constructor
    UnionFind(ll sz_): par(sz_), siz(sz_, 1LL) {
        for (ll i = 0; i < sz_; ++i) par[i] = i; // 初期では親は自分自身
    }
    void init(ll sz_) {
        par.resize(sz_);
        siz.assign(sz_, 1LL);  // resize だとなぜか初期化されなかった
        for (ll i = 0; i < sz_; ++i) par[i] = i; // 初期では親は自分自身
    }
    // Member Function
    // Find
    ll root(ll x) { // 根の検索
        while (par[x] != x) {
            x = par[x] = par[par[x]]; // x の親の親を x の親とする
        }
        return x;
    }
    // Union(Unite, Merge)
    bool merge(ll x, ll y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        // merge technique（データ構造をマージするテク．小を大にくっつける）
        if (siz[x] < siz[y]) swap(x, y);
        siz[x] += siz[y];
        par[y] = x;
        return true;
    }
    bool issame(ll x, ll y) { // 連結判定
        return root(x) == root(y);
    }
    ll size(ll x) { // 素集合のサイズ
        return siz[root(x)];
    }
};

struct Edge
{
    int a,b,cost;
    bool operator<(const Edge& o) const {
    return cost < o.cost;
  }
};

struct Graph
{
    int n;
    vector<Edge> es;
};

int main()
{
    while(1){
   int N;
   cin>>N;
   if(N==0) break;
   int m;
   cin>>m;
   Graph g;
   g.n=N;
   UnionFind T(N);
   rep(i,m){
       Edge e;
       int a,b,d;
       char o,p;
       cin>>a>>o>>b>>p>>d;
       e.a=a;
       e.b=b;
       e.cost=d;
       g.es.push_back(e);
   }
   sort(g.es.begin(),g.es.end());
  /* rep(i,g.es.size()) cout<<g.es[i].cost<<" ";
   cout<<endl;*/
   int min_cost=0;
   rep(i,g.es.size()){
       Edge e=g.es[i];
       if(e.cost!=-1){
           if(!T.issame(e.a,e.b)){
               min_cost+=e.cost;
               T.merge(e.a,e.b);
           }
       }
   }
   cout<<(min_cost-(N-1)*100)/100<<endl;
    }
}