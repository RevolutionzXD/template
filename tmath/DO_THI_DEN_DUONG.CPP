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

struct edge{
	ll u, v, w;
};

ll par[MAXN], sz[MAXN];
vector<edge> v;
ll n, m;


void make_set(){
	for ( ll i = 1; i <= n; ++i ) {
		par[i] = i;
		sz[i] = 1;
	}
}

ll find_set( ll x ){
	if ( x == par[x] ) return x;
	return par[x] = find_set( par[x] );
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

void input(){
	cin >> n >> m;
	for ( ll i = 1; i <= m; ++i ) {
		ll x, y, z; cin >> x >> y >> z;
		edge e;
		e.u = x; e.v = y; e.w = z;
		v.pb(e);
	}
}

bool cmp( edge a, edge b ){
	return a.w < b.w;
}

bool cnp( edge a, edge b ){
	return a.w > b.w;
}

void kruskal(){
	vector<edge> mst;
	ll d1 = 0, d2 = 0;
	
	sort( v.begin(), v.end(), cmp );
	
	for ( ll i = 1; i < m; ++i ) {
		if ( mst.size() == n - 1 ) break;
		edge e = v[i];
		if ( Union( e.u, e.v ) ){
			mst.pb(e);
			d += e.w;
		}
	}
	
	
	sort( v.begin(), v.end(), cnp );
	
	for ( ll i = 1; i <)
	
	
}





int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	input();
	make_set();
	kruskal();

	return 0;
}


