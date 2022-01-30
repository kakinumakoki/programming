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
    int N,num,soe;
    int max=-1;
    cin>>N;
    vector<int>sum(N);
    rep(i,N){
        cin>>num;
        if(i==0)sum[i]=num;
        else sum[i]=sum[i-1]+num;

        if(num>max) {
            soe=i;
            max=num;
        }
    }
    if(soe!=0)cout<<sum[soe-1]<<endl;
    else cout<<0<<endl;
    cout<<sum[N-1]-sum[soe]<<endl;
}
