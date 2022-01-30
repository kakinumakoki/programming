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
    int a[4],b[4];
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
        int hit=0,blow=0;
        rep(i,4) if(a[i]==b[i]) hit++;
        rep(i,4){
            rep(j,4) if(a[i]==b[j]) blow++; 
        }
        cout<<hit<<" "<<blow-hit<<endl;
    }
}