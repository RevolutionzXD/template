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

struct Ed{
	ll u, v, w;
};


vector<Ed> edge;
ll n, m;

struct Dsu{
	
	ll par[MAXN], sz[MAXN];
	
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

} dsu;


void input(){
	
	cin >> n >> m;
	
	for ( ll i = 1; i <= m; ++i ) {
		ll x, y, z; cin >> x >> y >> z;
		edge.pb( { x, y, z } );
	}
}

bool cmp( Ed a, Ed b ){
	return a.w < b.w;
}

void kruskal(){
	
	vector<Ed> mst;
	ll d = 0;
	
	sort( edge.begin(), edge.end(), cmp );
	
	for ( auto e : edge ) {
		
		if ( mst.size() == n - 1 ) break;

		if ( dsu.Union( e.u, e.v ) ) {
			mst.pb(e);
			d += e.w;
		}
	}
	
	if ( mst.size() != n - 1 ) cout << "Do thi khong lien thong";
	
	else {
		cout << "MST: " << d << endl;
		for ( auto it : mst ){
			cout << it.u << " " << it.v << " " << it.w << endl;
		}
	}
}





int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	input();
	dsu.make_set();
	kruskal();

	return 0;
}


