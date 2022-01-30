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
    int price[7][7]={{0,300,500,600,700,1350,1650},{-1,0,350,450,600,1150,1500},{-1,-1,0,250,400,1000,1350},{-1,-1,-1,0,250,850,1300},{-1,-1,-1,-1,0,600,1150},{-1,-1,-1,-1,-1,0,500},{0}};
    int dist[7][7]={{0,6,13,18,23,43,58},{-1,0,7,12,17,37,52},{-1,-1,0,5,10,30,45},{-1,-1,-1,0,5,25,40},{-1,-1,-1,-1,0,20,35},{-1,-1,-1,-1,-1,0,15},{0}};

    while(1)
    {
        int d,a;
        int h_s,h_e,m_s,m_e;
        cin>>d;
        if(d==0) break;
        cin>>h_s>>m_s;
        cin>>a>>h_e>>m_e;
        int dd=dist[d-1][a-1];
        int pp=price[d-1][a-1];
        int flag=0;
        int start=h_s*60+m_s,end=h_e*60+m_e;
        if(((17*60+30<=start&&start<=19*60+30)||(17*60+30<=end&&end<=19*60+30))&&dd<=40) flag=1;
        if(flag==1){
            pp/=2;
            if(1<=pp%100&&pp%100<50) pp=pp-pp%100+50;
            else if(51<=pp%100&&pp%100<=99)pp=pp-pp%100+100;
        }
        cout<<pp<<endl;
    }
}