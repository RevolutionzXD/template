// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf 8
using namespace std;
const ll MAXN = 1e6 + 5;
const ll INF = 1e15;

vector<ll> adj[MAXN];
bool vis[MAXN];
ll dp[MAXN];

ll n, m;

void input() {
	
	cin >> n >> m;
	
	for ( ll i = 1; i <= m; ++i ) {
		ll x, y; cin >> x >> y;
		adj[x].pb(y);
	}
	
	memset( vis, false, sizeof(vis) );
	
}


void dfs ( ll u ) {
	
	vis[u] = true;
	for ( auto v : adj[u] ) {
		if ( !vis[v] ) dfs(v);
		dp[u] = max( dp[u], dp[v] + 1 );
	}
}

void solve() {
	
	for ( ll i = 1; i <= n; ++i ) dfs(i);
	
	ll ans = 0;
	for ( ll i = 1; i <= n; ++i ) ans = max( ans, dp[i] );
	
	cout << ans;
}





signed main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	input();
	solve();

	return 0;
}


