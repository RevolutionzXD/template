// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
using namespace std;
const ll MAXN = 1e6 + 5;
const ll INF = 1e15;

ll par[MAXN], sz[MAXN];
ll n, m;


void make_set() {
	for ( ll i = 1; i <= n; ++i ) {
	par[i] = i;
	sz[i] = 1;
	}
}

ll find_set( ll u ) {
	if ( u == par[u] ) return u;
	return( par[u] = find_set( par[u] ) );
}

bool Union( ll a, ll b ){
	a = find_set(a);
	b = find_set(b);
	if ( a == b ) return false;
	if ( sz[a] < sz[b] ) swap( a, b );
	par[b] = a;
	sz[a] += sz[b];
	return true;
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll d = 0;
	cin >> n >> m;
	
	make_set();
	for ( ll i = 1; i <= m; ++i ){
		ll x, y; cin >> x >> y;
		
		if ( Union( x, y ) ) d++;
		if ( d == n - 1 ) {
			cout << i;
			return 0;
		}
	}
	cout << "FAILURE";

	return 0;
}


