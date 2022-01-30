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
    double l,r;
    int ans[4][2]={0};
    while(cin>>l>>r)
    {
    if(l>=1.09) ans[0][0]++;
    else if(l>=0.59) ans[1][0]++;
    else if(l>=0.19) ans[2][0]++;
    else  ans[3][0]++;

    
    if(r>=1.09) ans[0][1]++;
    else if(r>=0.59) ans[1][1]++;
    else if(r>=0.19) ans[2][1]++;
    else  ans[3][1]++;
    }
    rep(i,4){
            cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
}