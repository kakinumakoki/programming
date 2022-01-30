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

struct Point{
    double x;
    double y;
};

float cal(Point S,Point A,Point B){
    return (S.x-B.x)*(A.y-B.y)-(A.x-B.x)*(S.y-B.y);
}

int main()
{
    Point A,B,C,S;
    while(cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y>>S.x>>S.y){
        bool a,b,c;
        a=cal(S,A,B) <0.0f;
        b=cal(S,B,C) <0.0f;
        c=cal(S,C,A) <0.0f;
        if((a==b)&&(b==c)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}