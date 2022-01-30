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
        vector<P> time(n);
        rep(i,n){
        int id,m1,s1,m2,s2,m3,s3,m4,s4;
        cin>>id>>m1>>s1>>m2>>s2>>m3>>s3>>m4>>s4;
        int ans=m1*60+s1+m2*60+s2+m3*60+s3+m4*60+s4;
        time[i].first=ans;
        time[i].second=id;
        }
        sort(time.begin(),time.end());
        cout<<time[0].second<<endl;
        cout<<time[1].second<<endl;
        cout<<time[n-2].second<<endl;
        }
}