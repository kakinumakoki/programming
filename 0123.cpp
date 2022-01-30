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
    double m,M;
    double time[7][2]={{35.5,71},{37.5,77},{40,83},{43,89},{50,105},{55,116},{70,148}};
    while(cin>>m>>M){
    int flag1=0,flag2=0;
        rep(i,7){
            if(m<time[i][0]) flag1=1;
            if(M<time[i][1]) flag2=1;
            if(flag1+flag2==2){
                if(i==0) cout<<"AAA"<<endl;
                else if(i==1) cout<<"AA"<<endl;
                else if(i==2) cout<<"A"<<endl;
                else if(i==3) cout<<"B"<<endl;
                else if(i==4) cout<<"C"<<endl;
                else if(i==5) cout<<"D"<<endl;
                else if(i==6) cout<<"E"<<endl;
                break;
            }
        }
        if(flag1+flag2<2) cout<<"NA"<<endl;
    }
}