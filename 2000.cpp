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


int main()
{
    while(1){
        int t;
        int z[21][21]={0};
        cin>>t;
        if(t==0) break;
        rep(i,t){
            int x,y;
            cin>>x>>y;
            z[x][y]=1;
        }
        int o;
        int n_x=10,n_y=10;
        int ans=0;
        cin>>o;
        rep(i,o){
            char h;
            int num;
            cin>>h>>num;
            if(h=='N'){
                rep(j,num){
                n_y++;
                if(z[n_x][n_y]==1){
                    z[n_x][n_y]=0;
                    ans++;
                }}
            }
            else if(h=='E'){
                rep(j,num){
                n_x++;
                if(z[n_x][n_y]==1){
                    z[n_x][n_y]=0;
                    ans++;
                }}
            }
            else if(h=='S'){
                rep(j,num){
                n_y--;
                if(z[n_x][n_y]==1){
                    z[n_x][n_y]=0;
                    ans++;
                }}
            }
            else{
                rep(j,num){
                n_x--;
                if(z[n_x][n_y]==1){
                    z[n_x][n_y]=0;
                    ans++;
                }
            }}
        }
        if(ans==t) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}