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
    int N,ans=1,r=0,l=0,last;
    cin>>N;
    vector<int> A;
    rep(i,N){
        int a;
        cin>>a;
        if(i==0) last=a;
        else{
            if(last<=a){
                r++;
                last=a;
            }
            else{
                ans=max(ans,r-l+1);
                //cout<<l<<" "<<r<<endl;
                last=a;
                l=i;
                r=i;
            }
        }
    }
    ans=max(ans,r-l+1);
    cout<<ans<<endl;
}