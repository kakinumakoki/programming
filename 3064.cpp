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
    int t_a,t_b,r_a,r_b;
    cin>>t_a>>t_b>>r_a>>r_b;
    if(r_a==-1||r_b==-1){
        if(t_a<t_b) cout<<"Alice"<<endl;
        else if(t_a>t_b) cout<<"Bob"<<endl;
        else cout<<"Draw"<<endl;
    }
    else{
        if(r_a>r_b) cout<<"Alice"<<endl;
        else if(r_a<r_b) cout<<"Bob"<<endl;
        else cout<<"Draw"<<endl;
    }
}
