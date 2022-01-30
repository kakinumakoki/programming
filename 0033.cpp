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
   int N;
   cin>>N;
   rep(i,N){
       int flag=0;
       stack<int> B,C;
       B.push(0);
       C.push(0);
       rep(j,10){
           int num;
           cin>>num;
           int b=B.top(),c=C.top();
           int b_s=num-b,c_s=num-c;
           //cout<<b_s<<" "<<c_s<<endl;
           if(b_s>0&&c_s>0){
            if(b_s<=c_s) B.push(num);
            else if(b_s>=c_s) C.push(num);
            //cout<<B.top()<<" "<<C.top()<<endl;
           }
           else if(b_s>0||c_s>0){
            if(b_s<c_s) C.push(num);
            else if(b_s>c_s) B.push(num);
            //cout<<B.top()<<" "<<C.top()<<endl;
           }
           else flag=1;
       }
       if(flag==1) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
   }
}