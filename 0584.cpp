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
    int n;
    cin>>n;
    vector<int> A;
    rep(i,n){
        int a;
        cin>>a;
        A.push_back(a);
    }
    sort(A.begin(),A.end());
    vector<string> B(n);
    rep(i,n){
        B[i]=to_string(A[i]);
    }
    vector<int> num;
    rep(i,3){
        rep(j,3){
            if(i!=j){
                int m=stoi(B[i]+B[j]);
                num.push_back(m);
            }
        }
    }
    sort(num.begin(),num.end());
    cout<<num[2]<<endl;
}