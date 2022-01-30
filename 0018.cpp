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
    vector<int> num(5);
    rep(i,5) cin>>num[i];
    sort(num.begin(),num.end());
    reverse(num.begin(),num.end());
    rep(i,5){
        if(i==4) cout<<num[i]<<endl;
        else cout<<num[i]<<" ";
    }
}