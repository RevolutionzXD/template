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
queue <ll> q;
ll d[MAXN];

ll n, s, t, x, y;




void input() {
	
	cin >> n >> x >> y >> s >> t;
	
	for ( ll i = 1; i <= n; i++ ) {
		if ( i + x <= n ) adj[i].pb( i + x );
		if ( i - y >= 1 ) adj[i].pb( i - y );
	}
	memset ( visited, false, sizeof( visited ) );
	memset ( d, 1, sizeof(d) );
}

void bfs( ll u ) {
	
	q.push(u);
	visited[u] = true;
	
	while ( !q.empty() ) {
		
		ll v = q.front();
		q.pop();
		if ( v == t ) {
			cout << d[v];
			break;
		}
		d[v] += 1;
		for ( ll i : adj[v] ) {
			if ( !visited[i] ) {
				q.push(i);
				visited[i] = false;
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

	return 0;
}

