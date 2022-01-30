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
    while(1){
        int n;
        cin>>n;
        if(n==0) break;
        int s_h,s_m,e_m,sum_lunch=0,sum_dinner=0,sum_midnight=0;
        int lunch=0,dinner=0,midnight=0;
        char c;
        rep(i,n){
            int  flag=-1;
            scanf("%d:%d%c%d",&s_h,&s_m,&c,&e_m);
            if(s_m>e_m) e_m+=60;
            if(s_h==0||s_h==1) s_h+=24;
            bool ookk=false;
            if(e_m-s_m<=8) ookk=true;
            if(11<=s_h&&s_h<15) {
                flag=1;
                lunch++;
            }
            if(18<=s_h&&s_h<21) {
                flag=2;
                dinner++;
            }
            if(21<=s_h&&s_h<26) {
                flag=3;
                midnight++;
            }

            if(ookk){
                if(flag==-1) continue;
                if(flag==1) sum_lunch++;
                if(flag==2) sum_dinner++;
                if(flag==3) sum_midnight++;
            }
        }

        if(lunch==0) cout<<"lunch no guest"<<endl;
        else cout<<"lunch "<<100*sum_lunch/lunch<<endl;
        if(dinner==0)cout<<"dinner no guest"<<endl;
        else cout<<"dinner "<<100*sum_dinner/dinner<<endl;
        if(midnight==0) cout<<"midnight no guest"<<endl;
        else cout<<"midnight "<<100*sum_midnight/midnight<<endl;
    }
}
