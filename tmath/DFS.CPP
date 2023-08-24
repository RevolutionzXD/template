// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;

vector <ll> adj[1005];
bool visited[MAXN];

ll n, m;

void input() {
	cin >> n >> m;
	for ( ll i = 1; i <= m; i++ ) {
		ll x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset ( visited, false, sizeof( visited ) );
}

void dfs ( ll u ) {
	cout << u << " ";
	visited[u] = true;
	for ( ll i : adj[u] ) {
		if ( !visited[i] ) dfs (i);
	}
}



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	input();
	dfs(1);

	return 0;
}


