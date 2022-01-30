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
        vector<P>island(n);
        rep(i,n){
            cin>>island[i].second>>island[i].first;
        }
        sort(island.begin(),island.end());
        int flag=0;
        int sum=0;
        rep(i,n){
            sum+=island[i].second;
            if(sum>island[i].first){
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
