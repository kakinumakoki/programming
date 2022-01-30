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
#include <sstream>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll=long long;
using P=pair<int,int>;
using P_S=pair<int,string>;
using P_D=pair<double,int>;
using T=tuple<int,int,char,ll,string>;

#define N 1000000
int table[N];
bool is_prime[N];

int main()
{
    is_prime[1]=false;
    for(int i=2;i<N;i++){
        is_prime[i]=true;
        table[i]=0;
    }
    for(int num=2;num<N;num++){
        if(!is_prime[num]) continue;
        for(int k=2*num;k<N;k+=num){
            is_prime[k]=false;
        }
    }
    table[1]=0;
    	for(int i = 2; i < N; i++){
		if(is_prime[i]){

			table[i] = 1;
		}
		table[i] += table[i-1];
	}
	int n;
	while(cin>>n){
		cout<<table[n]<<endl;
	}
}