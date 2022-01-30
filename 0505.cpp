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
    int n,m;
    while(1){
        cin>>n>>m;
        if(n==0) break;
        vector<P>score(m);
        rep(i,m){
            score[i].first=0; score[i].second=-i-1;
        }
        rep(i,n){
            rep(j,m){
                int a;
                cin>>a;
                if(a==1) score[j].first++;
            }
        }
        sort(score.begin(),score.end());
        reverse(score.begin(),score.end());
        rep(i,m){
            if(i!=m-1)cout<<-1*score[i].second<<" ";
            else cout<<-1*score[i].second<<endl;
        }
    }
}