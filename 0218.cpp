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
       int n;
       cin>>n;
       if(n==0) break;
       rep(i,n){
           int pm,pe,pj;
           cin>>pm>>pe>>pj;
           if(pm==100||pe==100||pj==100) cout<<"A"<<endl;
           else if((pm+pe)/2>=90) cout<<"A"<<endl;
           else if((pm+pe+pj)/3>=80) cout<<"A"<<endl;
           else if((pm+pe+pj)/3>=70) cout<<"B"<<endl;
           else if((pm+pe+pj)/3>=50&&pm>=80||pe>=80) cout<<"B"<<endl;
           else cout<<"C"<<endl;
       }
   }
}