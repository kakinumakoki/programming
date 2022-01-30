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
    string S;
    int ans=0;
    while(1)
    {
        cin>>S;
        if(S=="0000") break;
        if(S[0]==S[1]&&S[1]==S[2]&&S[2]==S[3]) cout<<"NA"<<endl;
        else{
            int num=stoi(S);
            int ans=0;
            int a[4];
            while (num!=6174)
            {
                cout<<num<<endl;
                ans++;
                rep(i,4){
                    a[i]=(num/(int)pow(10,i))%10;
                }
                sort(a,a+4);
                num=(a[3]-a[0])*1000+(a[2]-a[1])*100+(a[1]-a[2])*10+(a[0]-a[3]);
            }
            cout<<ans<<endl;
        }
    }
}
