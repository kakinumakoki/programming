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
    int w,m,s;
    cin>>w>>m>>s;
    int yae=0,take=0;
    if(m>=s) yae=1;
    if(w-s<=m) take=1;

    if(yae==1&&take==1) cout<<3<<endl;
    else if(yae==1) cout<<1<<endl;
    else if(take==1) cout<<2<<endl;
    else cout<<0<<endl; 
}