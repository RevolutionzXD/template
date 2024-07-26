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

const int MAXN = 5e5 + 5;
const int MAXM = 2e5 + 5;
const int MOD = 1e9 + 7;


//---------Variable---------//

int numVer, numEdge;
vector<int> adj[MAXN];
int low[MAXN], num[MAXN];
int vis[MAXN];
int timeDfs;
int numScc;
vector<int> scc[MAXN];
stack<int> st;

//--------------------------//



void tarjan(int u) {
	num[u] = low[u] = ++timeDfs;
	vis[u] = 1;
	st.push(u);
	for (int v : adj[u]) {
		if (vis[v] == 0) {
			tarjan(v);
			minimize(low[u], low[v]);
		}
		if (vis[v] == 1) minimize(low[u], num[v]);
	}
	if (low[u] == num[u]) {
		++numScc;
		int v;
		do {
			v = st.top(); st.pop();
			scc[numScc].push_back(v);
			vis[v] = 2;
			
		} while (v != u);
	}
}



signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    freopen(TASK".INP", "r", stdin);
    freopen(TASK".OUT", "w", stdout);

	cin >> numVer >> numEdge;
	for (int i = 1; i <= numEdge; ++i) {
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
	}
	for (int i = 1; i <= numVer; ++i) {
		if (!num[i]) tarjan(i);
	}
	cout << numScc << '\n';
	for (int i = 1; i <= numVer; ++i) {
		if (scc[i].size()) {
			for (int t : scc[i]) cout << t << " ";
			cout << '\n';
		}
	}

	

    return 0;

}












