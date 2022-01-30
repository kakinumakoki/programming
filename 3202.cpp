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
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll=long long;
using P=pair<int,int>;
using P_S=pair<int,string>;
using P_D=pair<double,int>;
using T=tuple<int,int,char,ll,string>;

struct Bom{
    int x;
    int y;
};

int main(){
    while(1){
        int W,H,N,D,B,ans=0;
        cin>>W>>H>>N>>D>>B;
        B=B-1;
        vector<Bom> Bo(N);
        vector<bool> seen(N,true);
        vector<vector<int>> mas(W,vector<int>(H,-1));
        if(W==0&&H==0) break;
        rep(i,N){
            int a,b;
            cin>>a>>b;
            Bo[i].x=a-1;
            Bo[i].y=b-1;
            mas[a-1][b-1]=i;
        }
        /*rep(i,W){
            rep(j,H) cout<<mas[i][j]<<" ";
            cout<<endl;
        }*/
        queue<int> S;
        S.push(B);
        seen[B]=false;
        while(!S.empty()){
            int now=S.front();
            S.pop();
            ans++;
            int now_x=Bo[now].x;
            int now_y=Bo[now].y;
            for(int i=1;i<=D;i++){
                if(now_x-i>=0){
                if(mas[now_x-i][now_y]!=-1){
                    if(seen[mas[now_x-i][now_y]]==true){
                        S.push(mas[now_x-i][now_y]);
                        seen[mas[now_x-i][now_y]]=false;
                    }
                }}
                if(now_x+i<W){
                if(mas[now_x+i][now_y]!=-1){
                  if(seen[mas[now_x+i][now_y]]==true){
                       S.push(mas[now_x+i][now_y]);
                       seen[mas[now_x+i][now_y]]=false;
                   }
                }}
                if(now_y-i>=0){
                if(mas[now_x][now_y-i]!=-1){
                    if(seen[mas[now_x][now_y-i]]==true){
                        S.push(mas[now_x][now_y-i]);
                        seen[mas[now_x][now_y-i]]=false;
                    }
                }}
                if(now_y+i<H){
                if(mas[now_x][now_y+i]!=-1){
                 if(seen[mas[now_x][now_y+i]]==true){
                      S.push(mas[now_x][now_y+i]);
                      seen[mas[now_x][now_y+i]]=false;
                  }
                }}
            }
        }
        cout<<ans<<endl;
    }
}