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
    int N;
    cin>>N;
    rep(i,N){
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int a=stoi(s);
        reverse(s.begin(),s.end());
        int b=stoi(s);
        cout<<abs(a-b)<<endl;
    }
}