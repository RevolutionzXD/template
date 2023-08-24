// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e3 + 5;

ll a[MAXN][MAXN];



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll m, n, t; cin >> m >> n >> t;
	for ( ll i = 1; i <= m; i++ ) 
		for ( ll j = 1; j <= n; j++ ) cin >> a[i][j];
		
	while ( t-- ) {
		ll x, y; cin >> x >> y;
		cout << a[x][y] << endl;
	}
	

	return 0;
}


