// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
using namespace std;
const ll MAXN = 1e6 + 5;
const ll INF = 1e15;

bool visited[MAXN];
vector <ll> adj[MAXN];
ll node[MAXN], par[MAXN];

ll n, r, q;



void input() {
	
	cin >> n >> r >> q;
	for ( ll i = 1; i <= n - 1; i++ ) {
		ll x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
		
	}
	memset( visited, false, sizeof( visited ) );
	memset( node, 0, sizeof( node ) );
}

void dfs ( ll u ) {
	
	visited[u] = true;
	for ( ll v : adj[u] ) {
		if ( !visited[v] ) {
		dfs(v);		
		node[u] += 1;
		par[v] = u;
		}
	}
}




int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	input();
	dfs(r);
	
	while( q-- ){
		ll u; cin >> u;
		if ( u == r ) cout << -1 << endl;
		else cout << par[u] << endl;
	}
	return 0;
}


