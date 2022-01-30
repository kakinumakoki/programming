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
            vector<int> a(n);
            rep(i,n) cin>>a[i];
            int k;
            cin>>k;
            int ans=0,l=0,r=n-1;
            while(r-l>=0){
                int c=(l+r)/2;
                ans++;
                if(k==a[c]) break;
                if(k<a[c]) r=c-1;
                else l=c+1;
            }
            cout<<ans<<endl;
        }
}