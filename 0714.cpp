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
#include <sstream>
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
    vector<int>num(2001,0);
    rep(i,N){
        int n;
        cin>>n;
        num[n]++;
    }
    int min_num,min_c=2000;
    rep(i,2001){
        if(num[i]!=0&&num[i]<min_c){
            min_c=num[i];
            min_num=i;
        }
    }
    cout<<min_num<<endl;
}