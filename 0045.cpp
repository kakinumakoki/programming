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



int main(){
    int a,b,sum=0;
    char c;
    double num=0,N=0;
    while(cin>>a>>c>>b){
        sum+=a*b;
        num+=b;
        N+=1.0;
    }
    cout<<sum<<endl;
    cout<<(int)(num/N+0.5)<<endl;
}