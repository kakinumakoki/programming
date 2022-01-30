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
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll=long long;
using P=pair<int,int>;
using P_S=pair<int,string>;
using P_D=pair<double,int>;
using T=tuple<int,int,char,ll,string>;

int main(){
    while(1){
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0) break;
        int A[n],B[m],C[10]={0,0,0,0,0,0,0,0,0,0};
        rep(i,n) cin>>A[i];
        rep(i,m) cin>>B[i];
        rep(i,n){
            rep(j,m){
                int sum=A[i]*B[j];
                while(sum>0){
                    C[sum%10]++;
                    sum/=10;
                }
                //C[sum/10]++;
            }
        }
        rep(i,10) {
            if(i==9) cout<<C[i];
            else cout<<C[i]<<" ";
        }
        cout<<endl;
    }
}