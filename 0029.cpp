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
    string s,w,e;
    cin>>s;
    map<string,int> mp;
    while(cin>>s){
        mp[s]++;
        if(mp[s]>mp[e]) e=s;
        if(s.size()>w.size()) w=s;
    }
    cout<<e<<" "<<w<<endl;
}