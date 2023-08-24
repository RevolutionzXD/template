// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e5 + 5;


vector <ll> a[MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll n, m; cin >> n >> m;
	
	for ( ll i = 1; i <= m; i++ ) {
		ll x, y; cin >> x >> y;
		a[x].push_back(y);
	}
	
	for ( ll i = 1; i <= n; i++ ) {
		sort ( a[i].begin(), a[i].end() );
		cout << a[i].size() << " ";
		for ( ll j : a[i] ) {
			if ( a[i].size() != 0 ) cout << j << " ";
			else {
				cout << 0;
				break;
			}
		}

		cout << endl;
	}
	


	return 0;
}


