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
    int N,M;
    cin>>N>>M;
    vector<int>ball(N);
    rep(i,N) ball[i]=i;
    rep(i,M){
        int X,Y;
        cin>>X>>Y;
        X--;
        Y--;
        ball[X]=Y;
    }
    rep(i,N) cout<<ball[i]+1<<endl;
}