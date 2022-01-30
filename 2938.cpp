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
    cin>>n;
    char now;
    cin>>now;
    for(int i=0;i<n-1;i++){
        char next;
        cin>>next;
        if(now=='T'&&next=='F') now='F';
        else now='T';
    }
    cout<<now<<endl;
}

