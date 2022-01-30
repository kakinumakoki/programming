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
    while(1)
    {
        string g;
        int y,m,d;
        cin>>g;
        if(g=="#") break;
        cin>>y>>m>>d;
        if(y<31) cout<<g<<" "<<y<<" "<<m<<" "<<d<<endl;
        else if(y==31&&m>=5){
            g="?";
            y=y-30;
            cout<<g<<" "<<y<<" "<<m<<" "<<d<<endl;
        }
        else if(y==31&&m<=4){
            cout<<g<<" "<<y<<" "<<m<<" "<<d<<endl;
        }
        else{
            g="?";
            y=y-30;
            cout<<g<<" "<<y<<" "<<m<<" "<<d<<endl;        
            }
    } 
}