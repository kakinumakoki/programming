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
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll=long long;
using P=pair<int,int>;
using P_S=pair<int,string>;
using P_D=pair<double,int>;
using T=tuple<int,int,char,ll,string>;

struct food{
    int num;
    int a;
    int b;
    int c;
    int d;
};

int main()
{
    while(1){
        int N;
        cin>>N;
        if(N==0) break;
        vector<food> F(N);      
        rep(i,N){
            cin>>F[i].num>>F[i].a>>F[i].b>>F[i].c;
            F[i].d=F[i].a*4+F[i].b*9+F[i].c*4;
        }
        int P,Q,R,C;
        cin>>P>>Q>>R>>C;
        vector<int> ans;
        rep(i,N){
            if(F[i].a<=P&&F[i].b<=Q&&F[i].c<=R&&F[i].d<=C) ans.push_back(F[i].num);
        }
        if(ans.empty()) cout<<"NA"<<endl;
        else{
            rep(i,ans.size()) cout<<ans[i]<<endl;
        }
    }
}