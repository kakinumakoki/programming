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
    while(cin>>n){
        vector<int>t(n);
        rep(i,n) cin>>t[i];
        sort(t.begin(),t.end());
        int ans=0,sum=0;
        rep(i,n) {
            sum+=t[i];
            ans+=sum;
        }
        cout<<ans<<endl;
    }
}
