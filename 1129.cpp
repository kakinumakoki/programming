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
            int n,r;
            cin>>n>>r;
            if(n==0) break;
            stack<int> h;
            rep(i,n){
                h.push(i+1);
            }
            rep(i,r){
                int p,c;
                cin>>p>>c;
                stack<int> A,B;
                rep(i,p-1){
                    A.push(h.top());
                    h.pop();
                }
                rep(i,c){
                    B.push(h.top());
                    h.pop();
                }
                while(!B.empty()){
                    h.push(B.top());
                    B.pop();
                }
                while(!A.empty()){
                    h.push(A.top());
                    A.pop();
                }
            }
            cout<<h.top()<<endl;

        }
}