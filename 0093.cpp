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
    int a,b;
    bool s=0;
    while(1){
        cin>>a>>b;
        if(a==0&&b==0) break;
        if(s) cout<<endl;
        s=1;
        int flag=0;
        for(int i=a;i<=b;i++){
            if(i%400==0||(i%4==0&&i%100!=0)){
                flag=1;
                cout<<i<<endl;
            }
        }
        if(flag==0) cout<<"NA"<<endl;
    }
}
