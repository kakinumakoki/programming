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
    while(1){
        int h[5];
        cin>>h[0];
        if(h[0]==0) break;
        for(int i=1;i<5;i++) cin>>h[i];
        int j[4]={0};
        rep(i,5) j[h[i]]++;
        if(j[1]>0&&j[2]>0&&j[3]>0){
            rep(i,5)cout<<3<<endl;
        }
        else if(j[1]==0&&j[2]>0&&j[3]>0){
            rep(i,5){
                if(h[i]==2) cout<<1<<endl;
                else cout<<2<<endl;
            }
        }
        else if(j[1]>0&&j[2]==0&&j[3]>0){
            rep(i,5){
                if(h[i]==3) cout<<1<<endl;
                else cout<<2<<endl;
            }
        }
        else if(j[1]>0&&j[2]>0&&j[3]==0){
            rep(i,5){
                if(h[i]==1) cout<<1<<endl;
                else cout<<2<<endl;
            }
        }
        else{
            rep(i,5) cout<<3<<endl;
        }
    }
}