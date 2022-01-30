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

int main(){
    string a,b;
    while(1){
        cin>>a>>b;
        if(a=="0"&&b=="0") break;
        int hit=0,blow=0;
        rep(i,4){
            if(a[i]==b[i])hit++;
        }
        int c[10]={0};
        rep(i,4){
            c[a[i]-'0']++;
            c[b[i]-'0']++;
        }
        int sum=0;
        rep(i,9){
            if(c[i]>1) sum++;
        }
        blow=sum-hit;
        cout<<hit<<" "<<blow<<endl;
    }
}