// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;


vector <ll> adj[MAXN];
ll visited[MAXN];
ll a[MAXN];

ll n, m, res;

void input() {
	cin >> n >> m;
	for ( ll i = 1; i <= m; i++ ) {
		ll x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset ( visited, false, sizeof ( visited) );
	memset ( a, false, sizeof (a) );
}


void dfs ( ll u ) {
	a[u] = true;
	visited[u] = true;
	for ( ll i : adj[u] ) {
		if ( !visited[i] ) dfs(i);
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	ll res = 0;

	input();
	
	for ( ll i = 1; i <= n; i++ ) {
		if ( a[i] == 0 ) {
			dfs(i);
			res++;
		}
	}
	
	cout << res - 1;
	
	return 0;
}