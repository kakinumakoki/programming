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
    while(1){
        int N,y,num;
        cin>>N;
        if(N==0) break;
        cin>>y;
        double max_m=-1;
        rep(i,N){
            double b,r,t;
            double m;
            cin>>b>>r>>t;
            if(t==1){
                m=(1+1.0*y*r/100);
            }
            else{
                m= pow((1+1.0*r/100),y);
            }
            //cout<<m<<endl;
            if(max_m<m){
                max_m=m;
                num=b;
            }
        }
        cout<<num<<endl;
    }
}