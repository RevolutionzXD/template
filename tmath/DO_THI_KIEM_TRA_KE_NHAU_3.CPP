// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;


pair <ll,ll> a[MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll n, m; cin >> n >> m;
	
	for ( ll i = 1; i <= m; i++ ) {
		cin >> a[i].first >> a[i].second;
	}
	
	sort ( a + 1, a + n + 1 );
	
	ll t; cin >> t;
	while ( t-- ) {
		ll x, y; cin >> x >> y;
		//it = find ( a[x].begin(), a[x].end(), y) - a[x].begin();
		
		ll ok = 0;
		for ( ll i = 1; i <= m; i++ ) {
			if ( a[i].first == x && a[i].second == y ) {
				cout << "YES" << endl;
				ok = 1;
				break;
			}
		}

		if ( ok == 0 ) cout << "NO" << endl;
		
	}
	

	


	return 0;
}


