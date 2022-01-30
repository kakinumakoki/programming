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
    string s;
    while(getline(cin,s)){
        s.pop_back();
        rep(i,26){
            for(int j=0;j<s.size();j++){
                if(islower(s[j])){
                    s[j]++;
                    if(s[j]>'z') s[j]='a';
                }
            }
            int flag=0;
            string see;
            for(int j=0;j<s.size();j++){
                if(s[j]==' '){
                    if(see=="the"||see=="this"||see=="that"){
                        flag=1;
                        break;
                    }
                    see="";
                }
                else see+=s[j];
            }
            if(flag==1) break;
        }
        cout<<s<<"."<<endl;
    }
}
