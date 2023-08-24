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

ll n, r;



void input() {
	
	cin >> n >> r;
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
	
	for ( ll i = 1; i <= n; ++i ){
		cout << node[i] << " ";
		for ( ll j = 1; j <= n; ++j ) {
			if ( par[j] == i ) cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}


