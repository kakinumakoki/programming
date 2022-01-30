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

int main()
{
    int N;
    cin>>N;
    int A[N],island=0;
    vector<int> B(N);
    rep(i,N) {
        cin>>A[i];
        B[i]=A[i];
    }
    sort(B.begin(),B.end());
    vector<int> C;
    C.push_back(B[0]);
    for(int i=1;i<N;i++){
        if(C[C.size()-1]!=B[i]) C.push_back(B[i]);
    }
    int h=0,c=0;
    while(1){
        if(c==C[C.size()-1]) break;
        int ans=0;
        int l=0,r=0;
        rep(i,N){
            if(A[i]<=h){
                if(r-l>0) ans++;
                l=i+1;
            }
            r=i+1;
        }
        if(r-l>0) ans++;
        //cout<<ans<<endl;
        island=max(island,ans);
        if(ans==0) break;
        h=C[c];
        c++;
    }
    cout<<island<<endl;
}

