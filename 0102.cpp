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
    int n,ining=0,out=0,score=0;
    int base[3]={0};
    cin>>n;
    while(ining<n)
    {
        string s;
        cin>>s;
        if(s=="OUT") out++;
        if(s=="HIT"){
                if(base[2]==1){
                base[2]=0;
                score++;
                }
                vector<int>p;
                rep(i,2){
                    if(base[i]==1){
                        p.push_back(i+1);
                        base[i]=0;
                    }
                }
                base[0]=1;
                rep(i,p.size()) base[p[i]]=1;
        }
        if(s=="HOMERUN"){
            int c=0;
            rep(i,3) {
                if(base[i]==1) c++;
                base[i]=0;
            }
            score+=1+c; 
        }
        if(out==3){
            cout<<score<<endl;
            ining++;
            score=0;
            rep(i,3) base[i]=0;
            out=0;
            
        }
        //rep(i,3) cout<<base[i]<<" ";
        //cout<<endl<<score<<endl;
    }

}