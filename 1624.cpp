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

int main()
{
    while(1){
        int n;
        cin>>n;
        if(n==0) break;
        vector<int> a;
        int sum=0;
        rep(i,n){
            int num;
            cin>>num;
            sum+=num;
            a.push_back(num);
        }
        int ave=sum/n;
        int k=0;
        rep(i,n) if(ave>=a[i]) k++;
        cout<<k<<endl;
    }
}