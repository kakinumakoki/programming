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

int main()
{
    char moji[6][5]={{'a','b','c','d','e'},{'f','g','h','i','j'},{'k','l','m','n','o'},{'p','q','r','s','t'},{'u','v','w','x','y'},{'z','.','?','!',' '}};

    string s;
    while(cin>>s){
        int flag=0;
        rep(i,s.size()){
            int now=s[i]-'0';
            if(i%2==0){
                if(now<1||now>6) flag=1;
            }
            else{
                if(now<1||now>5) flag=1;
            }
        }
        if(s.size()%2==1||flag==1) cout<<"NA"<<endl;
        else{
        for(int i=0;i<s.size();i+=2){
            int a,b;
            a=s[i]-'0'-1;
            b=s[i+1]-'0'-1;
            
            cout<<moji[a][b];
        }
        cout<<endl;
        }
    }
}