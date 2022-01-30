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


int gcd(int a, int b)
{
    if (b==0) {
        return a;
    }
    return gcd(b,a%b);
}

int main()
{
  int a,b;
  while(cin>>a>>b){
      cout<<gcd(a,b)<<endl;
  }
}   