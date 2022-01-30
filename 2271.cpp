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
    string s;
    cin>>s;
    int KUPC[4]={0,0,0,0};
    rep(i,s.size()){
        if(s[i]=='K') KUPC[0]++;
        if(s[i]=='U') KUPC[1]++;
        if(s[i]=='P') KUPC[2]++;
        if(s[i]=='C') KUPC[3]++;
    }
    int ans=0;
    int flag=0;
    while(flag!=1){
        rep(i,4){
            KUPC[i]--;
            if(KUPC[i]<0) flag=1;
        }
        if(flag==0) ans++;
    }
    cout<<ans<<endl;
}
