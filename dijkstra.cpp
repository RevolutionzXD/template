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

int numVer, numEdge;
vector<ii> adj[MAXN];
int dis[MAXN];

//--------------------------//



void dijkstra(int s, int dis[]) {
	for (int i = 1; i <= numVer; ++i) dis[i] = inf;
	dis[s] = 0;
	priority_queue<ii, vector<ii>, greater<ii>> pq;
	pq.push({0, s});
	while(pq.size()) {
		ii it = pq.top(); pq.pop();
		int u = it.se;
		int w = it.fi;
		if (dis[u] < w) continue;
		for (ii v : adj[u]) {
			if (minimize(dis[v.fi], dis[u] + v.se)) pq.push({dis[v.fi], v.fi});
		}
	}
}



signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    freopen(TASK".INP", "r", stdin);
    freopen(TASK".OUT", "w", stdout);

    cin >> numVer >> numEdge;
    for (int i = 1; i <= numEdge; ++i) {
    	int x, y, z; cin >> x >> y >> z;
    	adj[x].push_back({y, z});
    	adj[y].push_back({x, z});
    }
    dijkstra(1, dis);
 

    return 0;

}
