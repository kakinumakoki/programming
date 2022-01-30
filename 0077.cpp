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

int n; double ax, ay, bx, by, cx, cy;
int main() {
	cin >> n;
	while (n--) {
		cin >> ax >> ay >> bx >> by >> cx >> cy;
		double a1 = 2 * (bx - ax);
		double b1 = 2 * (by - ay);
		double c1 = ax * ax - bx * bx + ay * ay - by * by;
		double a2 = 2 * (cx - ax);
		double b2 = 2 * (cy - ay);
		double c2 = ax * ax - cx * cx + ay * ay - cy * cy;
		double x = (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
		double y = (c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1);
		double r = hypot(ax - x, ay - y);
		printf("%.3f %.3f %.3f\n", x, y, r);
	}
}
