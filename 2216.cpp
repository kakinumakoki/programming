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
        int A,B;
        cin>>A>>B;
        if(A==0) break;
        int h=(B-A)/100%5,f=(B-A)/500%2,t=(B-A)/1000;
        cout<<h<<" "<<f<<" "<<t<<endl;
    }
}
