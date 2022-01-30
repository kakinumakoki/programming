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
    int n;
    cin>>n;
    cin.ignore();
    while(n>0)
    {
        string st,now,ans;
        getline(cin,st);
        rep(i,st.size()){
            if(i==st.size()-1){
                now+=st[i];
                if(now=="Hoshino") ans+="Hoshina";
                else ans+=now;
            }
            else if(st[i]==' '){
                now+=st[i];
                if(now=="Hoshino ") ans+="Hoshina ";
                else ans+=now;
                now="";
            }
            else{
                now+=st[i];
            }
        }
        cout<<ans<<endl;
        n--;
    }
}
