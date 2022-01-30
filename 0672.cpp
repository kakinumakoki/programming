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

int N;

int color_cost(vector<vector<char>> S,vector<vector<char>> T){
    int cost=0;
    rep(i,N){
        rep(j,N) if(S[i][j]!=T[i][j]) cost++;
    }
    return cost;
}

void rotate_r_poster(vector<vector<char>> S,vector<vector<char>> &C){
    rep(i,N){
        rep(j,N){
            C[j][N-i-1]=S[i][j];
        }
    }
}

void rotate_l_poster(vector<vector<char>> S,vector<vector<char>> &C){
    rep(i,N){
        rep(j,N){
            C[N-j-1][i]=S[i][j];
        }
    }
}

int main()
{
   cin>>N;
   vector<vector<char>> S(N,vector<char>(N));
   vector<vector<char>> T(N,vector<char>(N));
   rep(i,N){
       rep(j,N) cin>>S[i][j];
   }
   rep(i,N){
       rep(j,N) cin>>T[i][j];
   }
   vector<vector<char>> cp(N,vector<char>(N));
   int cost1,cost2,cost3,cost4;
   cost1=color_cost(S,T);
   rotate_r_poster(S,cp);
   cost2=color_cost(cp,T)+1;
   rotate_l_poster(S,cp);
   cost3=color_cost(cp,T)+1;
   rep(i,N){
       rep(j,N) S[i][j]=cp[i][j];
   }
   rotate_l_poster(S,cp);
   cost4=color_cost(cp,T)+2;
   //cout<<cost1<<" "<<cost2<<" "<<cost3<<" "<<cost4<<endl;
   cout<<min(min(cost1,cost2),min(cost3,cost4))<<endl;
}