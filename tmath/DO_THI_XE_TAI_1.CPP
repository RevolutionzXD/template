// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;

bool visited[MAXN];
vector <ll> adj[MAXN];
queue <ll> q;
set <ll> se;

ll n, m, x, s, t;


void input () {
	cin >> n >> m >> x >> s >> t;
	
	for ( ll i = 1; i <= m; i++ ) {
		
		ll x, y, z; cin >> x >> y >> z;
		
		if ( z <= x ) {
		adj[x].push_back(y);
		adj[y].push_back(x);
		}
	}
	memset ( visited, false, sizeof ( visited ) );
}

void bfs ( ll u ) {
	q.push(u);
	visited[u] = true;
	
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
	
	
	for ( ll i : se ) {
		if ( i == t ) {
			cout << "Yes";
			return 0;
		}
	}
	
	cout << "No";
	

	return 0;
}




