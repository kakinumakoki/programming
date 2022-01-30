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

int dx[12]={2,-2,0,0,2,-2,2,-2,1,-1,-1,1};
int dy[12]={0,0,2,-2,1,1,-1,-1,2,-2,2,-2};

int sx[9]={-1,0,1,-1,0,1,-1,0,1};
int sy[9]={1,1,1,0,0,0,-1,-1,-1};

struct za{
    int x;
    int y;
};

int main(){
    while(1){
        za p;
        cin>>p.x>>p.y;
        if(p.x==0&&p.y==0) break;
        vector<vector<int>> water(10,vector<int>(10,-1));
        int n;
        cin>>n;
        queue<za>jump;
        vector<za>sprinc(n);
        jump.push(p);
        rep(i,n) cin>>sprinc[i].x>>sprinc[i].y;
        rep(i,n){
            rep(j,9) {
                za next;
                next.x=sprinc[i].x+sx[j]; next.y=sprinc[i].y+sy[j];
                if(0<=next.x&&next.x<10&&0<=next.y&&next.y<10) water[next.y][next.x]=i;
            }
            /*rep(j,10){
                rep(k,10){
                    cout<<water[j][k];
                }cout<<endl;
            }*/
            int siz=jump.size();
            //cout<<siz<<endl;
            rep(j,siz){
                za now=jump.front();
                jump.pop();
                rep(k,12){
                    za next;
                    next.x=now.x+dx[k]; next.y=now.y+dy[k];
                    //cout<<next.y<<":"<<next.x<<endl; 
                    if(0<=next.x&&next.x<10&&0<=next.y&&next.y<10&&water[next.y][next.x]==i) jump.push(next);
                }
            }
        }
        if(!jump.empty()) cout<<"OK"<<endl;
        else cout<<"NA"<<endl;
    }
}