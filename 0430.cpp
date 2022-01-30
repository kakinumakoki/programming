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
    int N;
    cin>>N;
    int start;
    vector<int> x(N);
    cin>>start;
    rep(i,N) cin>>x[i];
    sort(x.begin(),x.end());
    int ans=0;
    //cout<<half<<endl;
    if(start<x[0]) ans=x[N-1]-start;
    else if(start>x[N-1]) ans=start-x[0];
    else{
        ans=x[N-1]-x[0]+min(x[N-1]-start,start-x[0]);
    }
    cout<<ans<<endl;
    
}