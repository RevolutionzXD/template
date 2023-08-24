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

vector <ll> adj[MAXN];
ll ans[MAXN];

ll n, c;



void input() {
	
	cin >> n >> c;
	
	for ( ll i = 1; i <= n - 1; i++ ) {
		ll x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}

}

void search( ll u, ll k ) {
	
	ans[u] = 1;
	
	for ( ll v : adj[u] ) {
		
		if ( v == k ) continue;
		search( v, u );
		ans[u] += ans[v];
			
		
	}
}



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	input();
	search( c, 0 );
	
	for ( ll i = 1; i <= n; i++ ) cout << ans[i] << endl;

	return 0;
}


