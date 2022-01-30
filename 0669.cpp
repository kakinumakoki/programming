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
    int X,L,R;
    cin>>X>>L>>R;
    int min=100001,ans=-1;
    for(int i=L;i<=R;i++){
        int sa=abs(X-i);
        if(sa<min) {
            min=sa;
            ans=i;
        }
    }
    cout<<ans<<endl;
}