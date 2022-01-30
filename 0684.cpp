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
    int N,M;
    cin>>N>>M;
    vector<bool>A(101,false),B(101,false);
    rep(i,N){
        int num;
        cin>>num;
        A[num]=true;
    }
    rep(i,M){
        int num;
        cin>>num;
        B[num]=true;
    }
    rep(i,101){
        if(A[i]*B[i]==1) cout<<i<<endl;
    }
}