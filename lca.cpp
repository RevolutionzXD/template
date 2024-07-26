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

int numVer;
vector<int> adj[MAXN];
int up[MAXN][18];
int height[MAXN];

//--------------------------//


void init(int u) {
	for (int v : adj[u]) {
		if (v == up[u][0]) continue;
		height[v] = height[u] + 1;
		up[v][0] = u;
		for (int i = 1; i < 18; ++i) {
			up[v][i] = up[up[v][i - 1]][i - 1];
		}
		init(v);
	}
}


int lca(int u, int v) {
	if (height[u] != height[v]) {
		if (height[u] < height[v]) swap(u, v);
		int tmp = height[u] - height[v];
		for (int i = 0; MASK(i) <= tmp; ++i) {
			if (BIT(tmp, i)) u = up[u][i];
		}
	}
	if (u == v) return u;
	for (int i = 17; i >= 0; --i) {
		if (up[u][i] != up[v][i]) {
			u = up[u][i];
			v = up[v][i];
		}
	}
	return up[u][0];
}




signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    freopen(TASK".INP", "r", stdin);
    freopen(TASK".OUT", "w", stdout);

    cin >> numVer;
    for (int i = 1; i < numVer; ++i) {
    	int x, y; cin >> x >> y;
    	adj[x].push_back(y);
    	adj[y].push_back(x);
    }
    init(1);
 

    return 0;

}

