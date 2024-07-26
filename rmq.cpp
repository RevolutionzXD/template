// Nguyen Thien Nhan (tomato)
#include <bits/stdc++.h>
//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,popcnt")

using namespace std;

#define TASK "A"
#define ll long long
#define fi first
#define se second
#define inf 1e9
#define BIT(x, i) (((x) >> (i)) & (1LL))
#define MASK(i) ((1LL) << (i))
#define ii pair<int, int>

template<class T> bool maximize(T &a, const T &b) {
    return a < b ? a = b, 1 : 0;
}
 
template<class T> bool minimize(T &a, const T &b) {
    return a > b ? a = b, 1 : 0;
}

const int MAXN = 1e5 + 5;
const int MAXM = 2e5 + 5;
const int MOD = 1e9 + 7;


//---------Variable---------//

int num, numQuery;
int arr[MAXN];
ii st[MAXN][18];

//--------------------------//


void init() {
	for (int i = 1; i <= num; ++i) st[i][0].fi = st[i][0].se = arr[i];
	for (int j = 1; j < 18; ++j) {
		for (int i = 1; i + MASK(j) - 1 <= num; ++i) {
			st[i][j].fi = max(st[i][j - 1].fi, st[i + MASK(j - 1)][j - 1].fi);
			st[i][j].se = min(st[i][j - 1].se, st[i + MASK(j - 1)][j - 1].se); 
		}
	}
}

int queryMax(int u, int v) {
	int k = __lg(v - u + 1);
	return max(st[u][k].fi, st[v - MASK(k) + 1][k].fi);
}

int queryMin(int u, int v) {
	int k = __lg(v - u + 1);
	return min(st[u][k].se, st[v - MASK(k) + 1][k].se);
}



signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    freopen(TASK".INP", "r", stdin);
    freopen(TASK".OUT", "w", stdout);

    cin >> num;
    for (int i = 1; i <= num; ++i) cin >> arr[i];
    init();
    cin >> numQuery;
	while(numQuery--) {
		int u, v; cin >> u >> v;
		cout << queryMax(u, v) << " " << queryMin(u, v) << '\n';
	}
 

    return 0;

}