// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf LLONG_MAX
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


const ll MAXN = 1e4 + 5;
const ll MOD = 1e9 + 6;


struct edge{
	
	ll u, v, w;
		
};



//---------Value---------//

vector<edge> Ed;
ll n, m;

//-----------------------//

struct dsu {
	
	ll par[MAXN], sz[MAXN];
	
	void make_set(){
		
		for ( ll i = 1; i <= n; ++i ) {
			
			par[i] = i;
			sz[i] = 1;
			
		}
		
	}
	
	ll find_set( ll u ) {
		
		if ( par[u] == u ) return u;
		return par[u] = find_set(par[u]);
		
	}
	
	bool Union ( ll a, ll b ) {
		
		a = find_set(a);
		b = find_set(b);
		if ( a == b ) return false;
		
		if ( sz[a] < sz[b] ) swap( a, b );
		par[b] = a;
		sz[a] += sz[b];
		return true;
		
	}
	
} Dsu;

void input() {
	
	cin >> n >> m;
	for ( ll i = 1; i <= m; ++i ) {
		
		ll x, y, z; cin >> x >> y >> z;
		Ed.pb( { x, y, z } );
		
	}
	
}

bool cmp ( edge a, edge b ) {
	return a.w < b.w;
}

void kruskal(){
	
	vector<edge> mst;
	ll d = 0;
	
	sort ( Ed.begin(), Ed.end(), cmp );
	
	for ( auto e : Ed ) {
		
		if ( mst.size() == n - 1 ) break;
		
		if ( Dsu.Union( e.u, e.v ) ) {
			
			mst.pb(e);
			d += e.w;
			
		}
		
	}
	
	cout << d;
	
}





signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	input();
	Dsu.make_set();
	kruskal();

	return 0;
	
}


