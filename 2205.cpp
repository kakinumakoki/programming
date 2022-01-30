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
    while(1)
    {
        int n,m;
        cin>>n>>m;
        if(n==0) break;
        string s[n];
        int money[n];
        rep(i,n){
            cin>>s[i]>>money[i];
        }
        int ans=0;
        rep(i,m){
            string t;
            cin>>t;
            rep(j,n){
                int flag=1;
                rep(l,8){
                    if(s[j][l]!='*'&&s[j][l]!=t[l]){
                        flag=0;
                    }
                }
                if(flag==1) {
                    ans+=money[j];
                }
            }
        }
        cout<<ans<<endl;
    }
}