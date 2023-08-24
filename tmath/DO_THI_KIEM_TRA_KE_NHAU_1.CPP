// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1005;


ll a[MAXN][MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll n, m; cin >> n >> m;
	
	memset ( a, 0, sizeof(a) );
	for ( ll i = 1; i <= m; i++ ) {
		ll x, y; cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
	
	ll t; cin >> t;
	while ( t-- ) {
		ll x, y; cin >> x >> y;
		if ( a[x][y] == 1 ) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

