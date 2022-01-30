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
    vector<P_D> player_A,player_B,player_C,player;
    rep(i,8){
        P_D p;
        cin>>p.second>>p.first;
        player_A.push_back(p);
    }
    sort(player_A.begin(),player_A.end());
    cout<<player_A[0].second<<" "<<player_A[0].first<<endl;
    cout<<player_A[1].second<<" "<<player_A[1].first<<endl;
    rep(i,6) player.push_back(player_A[i+2]);
    rep(i,8){
        P_D p;
        cin>>p.second>>p.first;
        player_B.push_back(p);
    }
    sort(player_B.begin(),player_B.end());
    cout<<player_B[0].second<<" "<<player_B[0].first<<endl;
    cout<<player_B[1].second<<" "<<player_B[1].first<<endl;
    rep(i,6) player.push_back(player_B[i+2]);
    rep(i,8){
        P_D p;
        cin>>p.second>>p.first;
        player_C.push_back(p);
    }
    sort(player_C.begin(),player_C.end());
    cout<<player_C[0].second<<" "<<player_C[0].first<<endl;
    cout<<player_C[1].second<<" "<<player_C[1].first<<endl;
    rep(i,6) player.push_back(player_C[i+2]);
    sort(player.begin(),player.end());
    cout<<player[0].second<<" "<<player[0].first<<endl;
    cout<<player[1].second<<" "<<player[1].first<<endl;

}
