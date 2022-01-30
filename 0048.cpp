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
    double m;
    while(cin>>m){
        if(m>91) cout<<"heavy"<<endl;
        else if(m>81) cout<<"light heavy"<<endl;
        else if(m>75) cout<<"middle"<<endl;
        else if(m>69) cout<<"light middle"<<endl;
        else if(m>64) cout<<"welter"<<endl;
        else if(m>60) cout<<"light welter"<<endl;
        else if(m>57) cout<<"light"<<endl;
        else if(m>54) cout<<"feather"<<endl;
        else if(m>51) cout<<"bantam"<<endl;
        else if(m>48) cout<<"fly"<<endl;
        else cout<<"light fly"<<endl;
    }
}