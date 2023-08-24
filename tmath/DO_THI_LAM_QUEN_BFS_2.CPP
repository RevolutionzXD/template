// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;

bool visited[MAXN];
vector <ll> adj[MAXN];
ll sol[MAXN];
queue <ll> q;


ll m, n, k;

void input() {
	
	cin >> n >> m;
	
	for ( ll i = 1; i <= m; i++ ) {
		ll x, y; cin >> x >> y;
		adj[x].push_back(y);
		//adj[y].push_back(x);
	}
	
	memset ( visited, false, sizeof (visited) );
	
}

void bfs( ll u ) {
	
	q.push (u);
	visited[u] = true;
	
	while (!q.empty() ) {
		
		ll v = q.front();
		q.pop();

		if ( v != u ) sol[v] = k;
		
		for ( ll i : adj[v] ) {
			
			if ( !visited[i] ) {
				q.push(i);
				visited[i] = true;
			}
			
		}
		
		k++;
	}
}



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	input();
	bfs(1);
	
	for ( ll i = 2; i <= n; i++ ) {
		if ( sol[i] == 0 ) cout << -1 << " ";
		else cout << sol[i] << " ";
	}
	
	

	return 0;
}


