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
    vector<int>num(5,0);
    rep(i,N){
        char c;
        cin>>c;
        num[c-'A']=1;
    } 
    int sum=0;
    rep(i,5){
        if(num[i]!=0) sum++;
    }
    //cout<<sum<<endl;
    if(sum>=3) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}