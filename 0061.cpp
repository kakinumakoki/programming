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
    vector<P> score;
    while(1){
        int p,s;
        char c;
        cin>>p>>c>>s;
        if(p==0&&s==0) break;
        P n;
        n.first=s;
        n.second=p;
        score.push_back(n);
    }
    sort(score.begin(),score.end());
    reverse(score.begin(),score.end());
    //rep(i,score.size()) cout<<score[i].first<<" "<<score[i].second<<endl;
    int rank[score.size()+1];
    int R=1;
    rep(i,score.size()){
        if(i!=0){
            if(score[i].first==score[i-1].first){
                R=rank[score[i-1].second];
            }
        }
        rank[score[i].second]=R;
        R++;
    }
    int sss;
    while(cin>>sss){
        cout<<rank[sss]<<endl;
    }
}