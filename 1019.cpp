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
        int N,K;
        cin>>N>>K;
        if(N==0) break;
        int S[K],B[K];
        rep(i,K) {
            cin>>S[i];
            B[i]=0;
        }
        rep(i,N){
            rep(i,K){
                int num;
                cin>>num;
                B[i]+=num;
            }
        }
        int flag=0;
        rep(i,K){
            if(S[i]<B[i]) {
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
