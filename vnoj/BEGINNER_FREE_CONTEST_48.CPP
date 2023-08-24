// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf LLONG_MAX
using namespace std;
const ll MAXN = 1e6 + 5;
const ll INF = 1e15;
const ll MOD = 1e9 + 7;

bool vis[MAXN];
vector<ll> adj[MAXN];
ll f[MAXN];

ll n, m;


void input() {
	
	cin >> n >> m;
	for ( ll i = 1; i <= m; ++i ) {
		ll x, y; cin >> x >> y;
		adj[x].pb(y);
	}
	
	memset( vis, false, sizeof(vis) );
	
}

void recur( ll u ) {
	
	for ( ll i = 1; i <= n; ++i ) {
		for ( auto v : adj[u] ) {
			f[u] =+ f[v];
			if ( adj[v].empty() ) f[v] = 1;
		}
	}
}





signed main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	input();
	recur(1);
	
	cout << f[n];

	return 0;
}


