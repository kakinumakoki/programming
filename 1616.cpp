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
    int s,mm=-1;
    vector<int> fish(n,0);
    rep(i,q){
        int a,v;
        cin>>a>>v;
        a--;
        fish[a]+=v;
        if(v>0&&fish[a]>mm){
            mm=fish[a];
            s=a;
        }
        if(v<0){
            rep(j,n){
                if(mm<fish[j]){
                    mm=fish[j];
                    s=j;
                }
            }
        }
        cout<<s+1<<" "<<mm<<endl;
    }
}