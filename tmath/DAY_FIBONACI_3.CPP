// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e6+ 5;
const ll mod = 1e9 + 7;


ll a[MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	a[1] = a[2] = 1;
	for ( ll i = 3; i <= MAXN; i++ ) a[i] = a[ i - 2 ] + a[ i - 1 ];

	ll t; cin >> t; while ( t-- ) {

        ll x; cin >> x;
        cout << a[x] % mod << endl;

	}


	return 0;
}



