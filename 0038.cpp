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



int main(){
    int a,b,c,d,e;
    while(scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e)!=EOF){
        vector<int> card(14,0);
        card[a]++;
        card[b]++;
        card[c]++;
        card[d]++;
        card[e]++;
        vector<int> ccc;
        ccc.push_back(a);
        ccc.push_back(b);
        ccc.push_back(c);
        ccc.push_back(d);
        ccc.push_back(e);
        sort(ccc.begin(),ccc.end());
        vector<int> aa;
        rep(i,14) {
            if(card[i]!=0)aa.push_back(card[i]);
        }
        sort(aa.begin(),aa.end());
        if(aa[aa.size()-1]==4) cout<<"four card"<<endl;
        else if(aa.size()==2&&aa[aa.size()-1]==3&&aa[aa.size()-2]==2) cout<<"full house"<<endl;
        else if(aa.size()==3&&aa[aa.size()-1]==3) cout<<"three card"<<endl;
        else if(aa.size()==3&&aa[aa.size()-1]==2&&aa[aa.size()-2]==2) cout<<"two pair"<<endl;
        else if(aa[aa.size()-1]==2) cout<<"one pair"<<endl;
        else if(ccc[0]!=1&&ccc[4]-ccc[3]==1&&ccc[3]-ccc[2]==1&&ccc[2]-ccc[1]==1&&ccc[1]-ccc[0]==1){
            cout<<"straight"<<endl;
        }
        else if(ccc[0]==1&&ccc[1]==2&&ccc[2]==3&&ccc[3]==4&&ccc[4]==5) cout<<"straight"<<endl;
        else if(ccc[0]==1&&ccc[1]==10&&ccc[2]==11&&ccc[3]==12&&ccc[4]==13)  cout<<"straight"<<endl;
        else cout<<"null"<<endl;
        
    }
}