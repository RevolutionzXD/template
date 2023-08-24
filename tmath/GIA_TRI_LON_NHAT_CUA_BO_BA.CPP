// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e6 + 5;
const ll lim = 1e9 + 5;

ll a[MAXN], mn[MAXN], mx[MAXN];



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll maxx = -lim, minn = lim, res = -lim;

	ll n; cin >> n;
	for ( ll i = 1; i <= n; i++ ) cin >> a[i];

	for ( ll i = 1; i <= n; i++ ) {
        maxx = max ( maxx, a[i] );
        mx[i] = max ( maxx, a[i] );
	}
    for ( ll i = n; i >= 1; i-- ) {
        minn = min ( minn, a[i] );
        mn[i] = min  ( minn, a[i] );
    }

    for ( ll i = 2; i <= n; i++ ) res = max ( res, mx[ i - 1 ] + a[i] - mn[ i + 1 ] );
    cout << res;


	return 0;
}



