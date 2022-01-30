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
    while(1)
    {
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0) break;
        int ff[n][n];
        rep(i,n){
            rep(j,n) ff[i][j]=0;
        }
        rep(i,m){
            int a,b;
            cin>>a>>b;
            ff[a-1][b-1]=1;
            ff[b-1][a-1]=1;
        }
        int come[n];
        rep(i,n) come[i]=0;
        vector<int> f_friend;
        rep(i,n) if(ff[0][i]==1) f_friend.push_back(i);
        rep(i,f_friend.size()) come[f_friend[i]]=1;
        rep(i,f_friend.size()){
            rep(j,n){
                if(ff[f_friend[i]][j]==1) come[j]=1;
            }
        }
        int ans=0;
        for(int i=1;i<n;i++){
            if(come[i]==1) ans++;
        }
        cout<<ans<<endl; 
    }
}