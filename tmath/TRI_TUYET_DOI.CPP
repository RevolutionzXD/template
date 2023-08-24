// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

ll a[MAXN], b[1000000];



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n, t, res = 0;

	cin >> n;
	for ( ll i = 1; i <= n; i++ ) cin >> a[i];

	sort ( a + 1, a + n + 1 );

	cin >> t;
	while ( t-- ) {
        ll x;
        cin >> x;

            ll k = lower_bound ( a + 1, a + n + 1, x ) - a - 1;

            ll l = lower_bound ( a + 1, a + n + 1, x ) - a;

            ll res1 = x - a[k], res2 = a[l] - x;

            cout << min ( res1, res2 ) << '\n';

	}




	return 0;
}



