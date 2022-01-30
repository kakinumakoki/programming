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



int main(){
    while(1)
    {
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0) break;
        vector<int> a(n),b(m);
        int a_sum=0,b_sum=0;
        rep(i,n) {
            cin>>a[i];
            a_sum+=a[i];
        }
        rep(i,m) {
            cin>>b[i];
            b_sum+=b[i];
        }
        int flag=0,ans_a,ans_b;
        rep(i,n){
            rep(j,m){
                if(a_sum-a[i]+b[j]==b_sum-b[j]+a[i]){
                    flag=1;
                    ans_a=a[i];
                    ans_b=b[j];
                }
            }
            if(flag==1) break;
        }
        if(flag==1) cout<<ans_a<<" "<<ans_b<<endl;
        else cout<<"-1"<<endl;
    }
}