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
        int n;
        cin>>n;
        if(n==0) break;
        vector<string> air;
        rep(i,n){
            string s;
            cin>>s;
            air.push_back(s);
        }
        int k=-1;
        rep(i,n){
            string m;
            m+=air[i][0];
            for(int j=0;j<air[i].size()-1;j++){
                if(air[i][j]=='a'||air[i][j]=='i'||air[i][j]=='u'||air[i][j]=='e'||air[i][j]=='o')  m+=air[i][j+1];
            }
            int s=m.size();
            k=max(k,s);
            air[i]=m;
            //cout<<m<<endl;
        }
        int ok=1,ans=-1;
        for(int i=1;i<=k;i++){
            //cout<<i<<"--------"<<endl;
            map<string,int>port;
            rep(j,n){
                string name;
                if(air[j].size()<=i) name=air[j];
                else{
                    rep(x,i) name+=air[j][x];
                }
                //cout<<name<<endl;
                if(port.count(name)){
                    //cout<<"same moji"<<endl;
                    ok=0;
                    break;
                }
                else{
                    port[name]++;
                }
            }
            if(ok==1){
                ans=i;
                break;
            }
            else ok=1;
        }
        cout<<ans<<endl;
    }
    
}