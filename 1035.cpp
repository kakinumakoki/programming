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
        int W,Q;
        cin>>W>>Q;
        if(W==0) break;
        int jack[W],ss=0;
        rep(i,W) jack[i]=-1;
        rep(k,Q){
            char s;
            int id,w;
            cin>>s;
            if(s=='s'){
                cin>>id>>w;
                int l=0,r=0,flag=0;
                for(int i=0;i<W;i++){
                    if(jack[i]==-1) r++;
                    else{
                        l=i+1;
                        r=i+1;
                    }
                    if(r-l==w){
                        cout<<l<<endl;
                        for(int j=l;j<r;j++) jack[j]=id;
                        flag=1;
                        break;
                    }
                }
                if(flag==0) cout<<"impossible"<<endl;
                /*rep(j,W) cout<<jack[j];
                cout<<endl;*/
            }
            else{
                cin>>id;
                rep(i,W){
                    if(jack[i]==id) jack[i]=-1;
                }
            }
        }
        cout<<"END"<<endl;
    }    
}