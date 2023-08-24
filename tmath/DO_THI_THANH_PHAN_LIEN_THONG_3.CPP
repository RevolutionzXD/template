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
const ll MAXN = 2e6 + 5;
const ll INF = 1e15;

ll par[MAXN], sz[MAXN];
ll n, k;


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
	

	cin >> n >> k;
	ll d = n;
	
	make_set();
	for ( ll i = 1; i <= k; ++i ){
		ll x, y; cin >> x >> y;
		
		if ( Union( x, y ) ){
			d--;
			cout << d << endl;
		}
		else cout << d << endl;
	}


	return 0;
}


