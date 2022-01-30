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
    while(1){
            int n;
            cin>>n;
            if(n==0) break;
            vector<P_S> team(n);
            rep(i,n){
                cin>>team[i].second;
                team[i].first=i;
                rep(j,n-1){
                    int score;
                    cin>>score;
                    if(score==0) team[i].first-=100;
                    if(score==1) team[i].first+=10;
                }
            }
            sort(team.begin(),team.end());
            rep(i,n) cout<<team[i].second<<endl;
        }
}