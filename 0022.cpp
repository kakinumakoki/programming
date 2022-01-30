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
    double a,b;
    cin>>a>>b;
    if(a>b) swap(a,b);
    if(a+360-b<b-a){
        if(a-(a+360-b)/2>0)
            printf("%.12f\n",a-(a+360-b)/2);
        else  
            printf("%.12f\n",b+(a+360-b)/2);
    }else printf("%.12f\n",(a+b)/2);
}
