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
        int ans=0;
        int R=0,L=0,last=0;
        rep(i,n){
            string s;
            cin>>s;
            if(s=="lu") L++;
            if(s=="ru") R++;
            if(s=="ld") L--;
            if(s=="rd") R--;

            if(last!=R+L&&(R+L)%2==0){
                ans++;
                last=R+L;
            }
        }
        cout<<ans<<endl;
    }
}
