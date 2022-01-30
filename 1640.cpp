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
        int n;
        cin>>n;
        if(n==0) break;
        int m[4]={0};
        int ans=0;
        rep(i,n){
            m[0]=m[1];
            m[1]=m[2];
            m[2]=m[3];
            cin>>m[3];
            if(i>=3&&m[0]==2&&m[1]==0&&m[2]==2&&m[3]==0) ans++;
        }
        cout<<ans<<endl;
    }
}