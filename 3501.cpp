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
   int N,Q;
   cin>>N>>Q;
   int A[N],B[N];
   rep(i,N) cin>>A[i]>>B[i];
   rep(i,Q){
       ll L,R,P;
       cin>>L>>R>>P;
       ll ans=A[L-1]*P+B[L-1];
       for(int j=L;j<=R-1;j++){
           if(ans>A[j]*P+B[j]) ans=A[j]*P+B[j];
       }
       cout<<ans<<endl;
   }
}
