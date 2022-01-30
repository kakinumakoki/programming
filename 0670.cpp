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
    string S;
    cin>>S;
    for(int i=0;i<=N-3;i++){
        string s;
        s.push_back(S[i]);
        s.push_back(S[i+1]);
        s.push_back(S[i+2]);
        if(s=="joi"){
            S[i]='J';
            S[i+1]='O';
            S[i+2]='I';
        }
    }
    cout<<S<<endl;
}