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
  int value;
  string str;
  int flag;
  map<string,vector<int>> book;

  while(cin>>str>>value){
    book[str].push_back(value);
  }
  for(map<string,vector<int>>::iterator it=book.begin();it!=book.end();++it){
    cout<<it->first<<endl;
    sort(it->second.begin(),it->second.end());
    flag=0;
    for(auto i:it->second){
      if(flag) cout<<" ";
      flag=1;
      cout<<i;
	}
    cout<<endl;
  }
}
