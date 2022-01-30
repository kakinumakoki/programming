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

int main()
{
    string s;
    int n,ans=0;
    cin>>s>>n;
    int sizz=s.size();
    rep(i,n){
        string st;
        cin>>st;
        int f=0;
        rep(i,10){
            int flag=1;
            rep(j,sizz){
                if(st[(i+j)%10]!=s[j]) flag=0;
            }
            if(flag==1) f=1;
        }
        if(f==1) ans++;
    }
    cout<<ans<<endl;
}

