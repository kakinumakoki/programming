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

int main(){
    while(1){
        int N,M;
        cin>>N>>M;
        if(N==0&&M==0) break;
        int ans=0,cost=M/N;
        rep(i,N){
            int money;
            cin>>money;
            ans+=min(money,cost);
        }
        cout<<min(ans,M)<<endl;
    }
}