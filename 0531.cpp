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


int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

struct masu{
    int x;
    int y;
};

int main(){
    int w,h;
    while(1){
        cin>>w>>h;
        if(w==0) break;
        vector<vector<int>> mp(h+1,vector<int>(w+1,0));
        int N;
        cin>>N;
        rep(i,N){
            int x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
            for(int j=y1;j<=y2;j++){
                for(int k=x1;k<=x2;k++){
                    mp[j][k]=1;
                }
            }
        }
        rep(i,h){
            rep(j,w){
                cout<<mp[i][j];
            }
            cout<<endl;
        }
    }
}