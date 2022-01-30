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
        vector<int> a(n),b(n);
        rep(i,n) cin>>a[i];
        rep(i,n) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int a_w=0,b_w=0,count=0,id=n-1;
        for(int i=n-1;i>=0;i--){
            count++;
            if(a[i]>b[id]) a_w++;
            else if(a[i]<=b[id]) id--;
            if(a_w>count/2) break;
        }
        if(count==n) cout<<"NA"<<endl;
        else cout<<count<<endl;
    }
}
