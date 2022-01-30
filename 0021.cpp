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
    while(n>0){
        double x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        if(abs((y2 - y1)*(x4 - x3) - (y4 - y3)*(x2 - x1) ) < 0.0000000001){ //I copied yutaka watabe's code here
			printf("YES\n");
		}else{
			printf("NO\n");
		}
        n--;
    }
}
