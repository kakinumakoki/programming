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
    string st;
    while(getline(cin,st))
    {
        vector<int>num(10);
        rep(i,10) num[i]=st[i]-'0';
        for(int i=0;i<10;i++){
            for(int j=0;j<10-i-1;j++){
                num[j]=(num[j]+num[j+1])%10;
            }
        }
        cout<<num[0]<<endl;
    }
}