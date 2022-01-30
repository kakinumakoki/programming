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
    string s;
    int num=0,O=0,k=0;
    cin>>s;
    rep(i,s.size()){
        if(s[i]>='0'&&s[i]<='9') num++;
        if('A'<=s[i]&&s[i]<='Z') O++;
        if('a'<=s[i]&&s[i]<='z') k++;
    }
    if(s.size()>=6&&num>0&&O>0&& k>0) cout<<"VALID"<<endl;
    else cout<<"INVALID"<<endl;
}