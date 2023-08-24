// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;

vector <ll> adj[MAXN];
queue <ll> q;
ll visited[MAXN];

set <ll> se;


ll n, m, s;




void input() {
	cin >> n >> m >> s;
	for ( ll i = 1; i <= m; i++ ) {
		ll x, y; cin >> x >> y;
		adj[x].push_back(y);
	}
	memset ( visited, false, sizeof ( visited) );
}

void bfs ( ll u ) {
	
	q.push(u);
	visited[u] = true;
	se.insert(u);
	
	while ( !q.empty() ) {
		ll v = q.front();
		q.pop();
		se.insert(v);
		for ( ll i : adj[v] ) {
			if ( !visited[i] ) {
				q.push(i);
				visited[i] = true;
			}
		}
	}
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	input();
	bfs(s);
	
	cout << se.size() << endl;
	
	for ( ll i : se ) cout << i << " ";

	return 0;
}


