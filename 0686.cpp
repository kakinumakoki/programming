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
    int N;
    cin>>N;
    vector<bool>I(N,false),O(N,false);
    rep(i,N){
        char s;
        cin>>s;
        if(s=='I') I[i]=true;
        else if(s=='O') O[i]=true;
    }
    int flag=0,count=0;
    while(count!=N){
        if(O[count]==true){
            int first=0,second=0;
            for(int i=0;i<count;i++){
                if(I[i]==true){
                    first=1;
                    break;
                }
            }
            for(int i=count+1;i<N;i++){
                if(I[i]==true){
                    second=1;
                    break;
                }                
            }
            if(first*second==1) flag=1;
        }
        if(flag==1) break;
        count++;
    }
    if(flag==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}