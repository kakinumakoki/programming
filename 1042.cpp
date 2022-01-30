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


int main()
{
    while(1)
    {
        string s;
        cin>>s;
        if(s=="END OF INPUT") break;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                cout<<sum;
                sum=0;
            }
            else sum++;
        }
        cout<<sum<<endl;
    }
}