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
    int J=0,O=0,I=0;
    int n;
    cin>>n;
    rep(i,n){
        char s;
        cin>>s;
        if(s=='J') J++;
        else if(s=='O') O++;
        else I++;
    }
    rep(i,J) cout<<'J';
    rep(i,O) cout<<'O';
    rep(i,I) cout<<'I';
    cout<<endl;
}