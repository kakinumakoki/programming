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
    int N,M;
    cin>>N>>M;
    queue<int>A,B,C;
    rep(i,N){
        int a;
        cin>>a;
        A.push(a);
    }
    rep(i,M){
        int b;
        cin>>b;
        B.push(b);
    }
    while(!A.empty()||!B.empty()){
        int a=A.front(),b=B.front();
        if(A.empty()) a=20001;
        if(B.empty()) b=2001;
        if(a<=b){
          A.pop();
          cout<<a<<endl;
        }
        else {
            B.pop();
            cout<<b<<endl;
        }
    }
}