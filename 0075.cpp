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
    while (cin >> N, N != -1) {
        double x = 1, y = 0, r;
	for (int i = 0; i < N-1; i++) {
            r = atan2(y, x);
	    x -= sin(r);
	    y += cos(r);
	}
	printf("%.5f\n%.5f\n", x, y);
    }
}