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
    int N;
    cin>>N;
    string s;
    cin>>s;
    int count=0;
    rep(i,N){
        if(i%2==0&&s[i]!='I') count++;
        if(i%2==1&&s[i]!='O') count++;
    }
    cout<<count<<endl;
}
