// Nguyen Thien Nhan (tomato)
#include <bits/stdc++.h>
//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,popcnt")

using namespace std;

#define TASK "A"
#define ll long long
#define fi first
#define se second
#define BIT(x, i) (((x) >> (i)) & (1LL))
#define MASK(i) ((1LL) << (i))
#define ii pair<int, int>

template<class T> bool maximize(T &a, const T &b) {
    return a < b ? a = b, 1 : 0;
}
 
template<class T> bool minimize(T &a, const T &b) {
    return a > b ? a = b, 1 : 0;
}

const int MAXN = 2e5 + 5;
const int MAXM = 2e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e9;


//---------Variable---------//

int numVer;
int dp[MAXN], sz[MAXN], ans[MAXN];
vector<ii> adj[MAXN];

//--------------------------//


void dfs(int u, int pre) {
    dp[u] = 0;
    sz[u] = 1;
    for (ii v : adj[u]) {
        if (v.fi == pre) continue;
        dfs(v.fi, u);
        dp[u] += v.se * sz[v.fi] + dp[v.fi];
        sz[u] += sz[v.fi];
    }
} 

void reroot(int u, int pre) {
    ans[u] = dp[u];
    for (ii v : adj[u]) {
        if (v.fi == pre) continue;
        int dpOddU = dp[u];
        int szOddU = sz[u];
        int dpOddV = dp[v.fi];
        int szOddV = sz[v.fi];
        dp[u] -= (v.se * szOddV + dpOddV);
        sz[u] -= szOddV;
        dp[v.fi] += (v.se * sz[u] + dp[u]);
        sz[v.fi] = numVer;
        dfs(v.fi, u);
        dp[u] = dpOddU;
        sz[u] = szOddU;
        dp[v.fi] = dpOddV;
        sz[v.fi] = szOddV;
    }
}




signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    freopen(TASK".INP", "r", stdin);
    freopen(TASK".OUT", "w", stdout);

    cin >> numVer; 
    for (int i = 1; i < numVer; ++i) {
        int x, y, z; cin >> x >> y >> z;
        adj[x].push_back({y, z});
        adj[y].push_back({x, z});
    }
    // int res = 0;
    dfs(1, 1);
    reroot(1, 1);
    for (int i = 1; i <= numVer; ++i) cout << ans[i] << " ";
    // cout << res;
 

    return 0;

}
