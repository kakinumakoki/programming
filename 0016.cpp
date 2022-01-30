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

double x, y, a; int s, t;
int main() {
	while(scanf("%d,%d", &s, &t)) {
		x += s * cos(a);
		y += s * sin(a);
		a += t / 180.0 * 3.14159265358979;
	}
	printf("%d\n%d\n", (int)y, (int)x);
}
