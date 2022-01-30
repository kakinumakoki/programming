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
    int n,count=0;
    cin>>n;
    if(n==0) break;
    int s[n],pre[n];
    rep(i,n) {
        cin>>s[i];
    }
    while(1)
    {
        rep(i,n) pre[i]=s[i];
        vector<int> num;
        map<int,int> sum;
        count++;
        rep(i,n){
            num.push_back(s[i]);
            sum[s[i]]++;
        }
        rep(i,n){
            s[i]=sum[num[i]];
        }
        int flag=0;
        rep(i,n){
            if(pre[i]!=s[i]){
                flag=1;
                break;
            }
        }
        if(flag==0) break;
    }
    cout<<count-1<<endl;
    rep(i,n){
        cout<<s[i];
        if(i!=n-1) cout<<" ";
    }
    cout<<endl;
    }
}
