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
    while(1)
    {
        int y1,m1,d1,y2,m2,d2;
        cin>>y1>>m1>>d1>>y2>>m2>>d2;
        if(y1<0||m1<0||d1<0||y2<0||m2<0||d2<0) break;
        int ans=0;
        for(int i=y1;i<y2;i++){
                if(i%400==0||(i%4==0&&i%100!=0)) ans+=366;
                else ans+=365;
        }
        int uruu=0;
        if(y2%400==0||(y2%4==0&&y2%100!=0)) uruu=1;
        int i;
        if(y1!=y2) i=1;
        else i=m1;
        for(;i<=m2;i++){
            if(i==m2) ans+=d2-d1;
            else{
                if(i==4||i==6||i==9||i==11) ans+=30;
                else if(i==2){
                    if(uruu==1) ans+=29;
                    else ans+=28;
                }
                else ans+=31;
            }
        }
        cout<<ans<<endl;
    }
}