// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;



ll a[MAXN];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n, t , x;

	cin >> n;
	for ( ll i = 1 ; i <= n; i++ ) cin >> a[i];

	cin >> t;
	while ( t-- ) {
        cin >> x;
        ll res = 1000000000;
        for ( ll i = 1; i <= x; i++ ) {
            res = min (a[i], res);
        }
        cout << res << '\n';
	}

	return 0;
}



