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
    while(1){
        int m,n_m,n_M;
        cin>>m>>n_m>>n_M;
        if(m==0) break;
        int score[m];
        rep(i,m){
            cin>>score[i];
        }
        int ans=-1,sa=0;
        for(int i=n_m;i<=n_M;i++){
            int a=score[i-1]-score[i];
            if(a>=sa){
                sa=a;
                ans=i;
            }
        }
        cout<<ans<<endl;
    } 
}