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
    vector<bool>dp(1000001,false);
    int ham[3]={2,3,5};
    dp[1]=true;
    for(int i=1;i<dp.size();i++){
        for(int j=0;j<3;j++){
            if(dp[i]==true){
                if(i*ham[j]<dp.size()){
                    dp[i*ham[j]]=true;
                }
            }
        }
    }
    vector<int> sum(1000001,0);
    sum[1]=1;
    for(int i=2;i<dp.size();i++){
        if(dp[i]==true) sum[i]=sum[i-1]+1;
        else sum[i]=sum[i-1];
    }
    while(1)
    {
        int n,m;
        cin>>n;
        if(n==0) break;
        cin>>m;
        cout<<sum[m]-sum[n-1]<<endl;
    }
}