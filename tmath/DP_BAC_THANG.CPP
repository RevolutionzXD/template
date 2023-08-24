// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e6 + 5;
const ll mod = 14062008;



ll a[MAXN], force[MAXN];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n, k;
	cin >> n >> k;
	for ( ll i = 1; i <= k; i++ ) {
        ll x; cin >> x;
        a[x] = 1;
	}

	force[1] = 1;
	for ( ll i = 2; i <= n; i++ ) {
        if ( a[i] == 0 ) force[i] = ( force[ i - 2 ] + force[ i - 1 ] ) % mod;
	}

	cout << force[n];







	return 0;
}




