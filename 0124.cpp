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
    int n;
    cin>>n;
    while(1){
        vector<P_S>leag;
        rep(i,n){
            string name;
            int a,b,c;
            cin>>name>>a>>b>>c;
            int score=a*3+c;
            leag.emplace_back(score*100-i+99,name);
        }
        sort(leag.begin(),leag.end());
        for(int i=n-1;i>=0;i--){
            cout<<leag[i].second<<","<<leag[i].first/100<<endl;
        }
        cin>>n;
        if(!n) break;
        cout<<endl;
    }
}
