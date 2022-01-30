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
        int n;
        cin>>n;
        if(n==0) break;
        string name[n];
        int d[n][30]={0},sum[30]={0},point[n]={0};
        rep(i,n){
            cin>>name[i];
            int num;
            cin>>num;
            rep(j,num){
                int a;
                cin>>a;
                d[i][a]++;
                sum[a]++;
            }
        }
        rep(i,n){
            rep(j,30){
                if(d[i][j]==1){
                    if(sum[j]==1){
                        point[i]+=n;
                    }
                    else if(1<sum[j]&&sum[j]<n){
                        point[i]+=n-(sum[j]-1);
                    }
                    else{
                        point[i]++;
                    }
                }
            }
        }
        /*rep(i,n){
            rep(j,30){
                cout<<d[i][j]<<" ";
            }
            cout<<endl;
        }
        rep(i,30) cout<<sum[i]<<" ";
        cout<<endl;
        rep(i,n) cout<<point[i]<<" ";*/
        int ans=-1,score=1e5;
        rep(i,n){
            if(score>point[i]){
                ans=i;
                score=point[i];
            }
        }
        vector<string> aa;
        rep(i,n){
            if(point[i]==score) aa.push_back(name[i]);
        }
        sort(aa.begin(),aa.end());
        cout<<score<<" "<<aa[0]<<endl;
    }
}
