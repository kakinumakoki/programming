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
    int n;
    while(1){
        cin>>n;
        if(n==0) break;
        int m[n],a[n],b[n],flag=1;
        rep(i,n){
            cin>>m[i]>>a[i]>>b[i];
        }
        rep(i,n){
            int sum=0;
            rep(j,n){
                if(a[j]<=a[i]&&a[i]<b[j]) sum+=m[j];
            }
            if(sum>150) flag=0;
        }
        if(flag==1) cout<<"OK"<<endl;
        else cout<<"NG"<<endl;
    }
}

