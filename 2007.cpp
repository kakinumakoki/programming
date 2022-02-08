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


char m1[5]={'.',',','!','?',' '};
char m2[3]={'a','b','c'};
char m3[3]={'d','e','f'};
char m4[3]={'g','h','i'};
char m5[3]={'j','k','l'};
char m6[3]={'m','n','o'};
char m7[4]={'p','q','r','s'};
char m8[3]={'t','u','v'};
char m9[4]={'w','x','y','z'};
int main()
{
    int n;
    cin>>n;
    rep(i,n){
        string message;
        string s;
        cin>>s;
        int count=-1;
        rep(j,s.size()){
            if(s[j]=='0'){
                if(j==0) continue;
                else{
                    char c=s[j-1];
                    if(c=='1') message+=m1[count%5];
                    else if(c=='2') message+=m2[count%3];
                    else if(c=='3') message+=m3[count%3];
                    else if(c=='4') message+=m4[count%3];
                    else if(c=='5') message+=m5[count%3];
                    else if(c=='6') message+=m6[count%3];
                    else if(c=='7') message+=m7[count%4];
                    else if(c=='8') message+=m8[count%3];
                    else if(c=='9') message+=m9[count%4];
                }
                count=-1;
            }
            else count++;
        }
        cout<<message<<endl;
    }
}