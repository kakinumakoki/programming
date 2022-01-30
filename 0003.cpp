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
    int N;
    cin>>N;
    rep(i,N){
        vector<int> t(3);
        cin>>t[0]>>t[1]>>t[2];
        sort(t.begin(),t.end());
        if(t[2]*t[2]==t[0]*t[0]+t[1]*t[1]){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}