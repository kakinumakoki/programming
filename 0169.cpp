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
    while(1){
        string s;
        getline(cin,s);
        if(s[0]=='0') break;
        vector<int> a;
        string num="";
        rep(i,s.size()){
            if(s[i]!=' ') num+=s[i];
            else if(s[i]==' ')
            {
                if(num<="9") a.push_back(stoi(num));
                else a.push_back(10);
                num="";
            }
        }
        if(num<="9") a.push_back(stoi(num));
        else a.push_back(10);
        //rep(i,a.size()) cout<<a[i]<<endl;
        int ans=0;
        rep(i,a.size()){
            ans+=a[i];
        }
        if(ans>21) cout<<0<<endl;
        else cout<<ans<<endl;
    }
}
