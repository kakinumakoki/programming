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
        int N;
        cin>>N;
        for (int i = 0; i < N; i++) {
                string a,b,c,d;
                cin>>a;
                cin>>b;
                int x=max(a.length(),b.length());
                for (int j = 0; j < x-a.length()+1; j++) {
                        c+="0";
                }
                for (int j = 0; j < x-b.length()+1; j++) {
                        d+="0";
                }
                c+=a;
                d+=b;
                for (int j = 0; j < x+1; j++) {
                        c[j]+=d[j]-'0';
                }
                for (int j = x; j >= 0; j--) {
                        if(c[j]>'9'){
                                c[j]-=10;
                                c[j-1]++;
                        }
                }

                if(c[0]!='0'){
                        if(x>=80){
                                cout<<"overflow"<<endl;
                                continue;
                        }
                        cout<<c[0];
                }else{
                        if(x>=81){
                        cout<<"overflow"<<endl;
                        continue;}
                }
                for (int j = 1; j <= x; j++) {
                        cout<<c[j];
                }
                cout<<endl;
        }

}
