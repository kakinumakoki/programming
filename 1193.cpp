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
    int H;
    while(1){
        cin>>H;
        if(H==0) break;
        int stone[H][5],score=0;
        rep(i,H){
            rep(j,5){
                cin>>stone[i][j];
            }
        }
        int flag=0;
        do{
            flag=0;
            vector<vector<int>> seen(H,vector<int>(5,0));
            rep(i,H){
                int num=stone[i][0],s=0,e=0;
                for(int j=1;j<4;j++){
                    if(stone[i][j]!=num){
                       e=j-1;
                       if(e-s>=2&&num!=0){
                           flag=1;
                           for(int k=s;k<=e;k++) seen[i][k]=1;
                       }
                       s=j;
                       num=stone[i][j];
                    }
                }
                if(stone[i][4]==num){
                    e=4;
                    if(e-s>=2&&num!=0){
                        flag=1;
                           for(int k=s;k<=e;k++) seen[i][k]=1;
                       }
                }
                else{
                    e=3;
                    if(e-s>=2&&num!=0){
                        flag=1;
                           for(int k=s;k<=e;k++) seen[i][k]=1;
                }
            }
        }
        /*    rep(i,H){
                rep(j,5) cout<<seen[i][j];
                cout<<endl;
            }*/
            rep(i,H){
                rep(j,5){
                    if(seen[i][j]==1){
                        score+=stone[i][j];
                        stone[i][j]=0;
                    }
                }
            }
            for(int x=0;x<H;x++){
            for(int i=H-1;i>0;i--){
                rep(j,5){
                    if(stone[i][j]==0){
                        stone[i][j]=stone[i-1][j];
                        stone[i-1][j]=0;
                    }
                }
            }}
            //cout<<flag<<endl;
        }while(flag!=0);
        /*rep(i,H){
            rep(j,5) cout<<stone[i][j];
            cout<<endl;
        }*/
        cout<<score<<endl;
        }
}

