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
    while(1)
    {
        int N,M;
        cin>>N>>M;
        int score[M+1]={0};
        if(N==0) break;
        rep(i,N){
            int d,v;
            cin>>d>>v;
            score[d]=max(score[d],v);
        }
        int ans=0;
        for(int i=1;i<=M;i++){
            ans+=score[i];
        }
        cout<<ans<<endl;
    }
}