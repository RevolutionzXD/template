#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e6 + 8;

ll a[MAXN], b[MAXN];

ll somu( ll x, ll y ) {
    ll res = 0;
    ll mu = y;

    while (x / mu > 0) {
        res += x / mu;
        mu *= y;
    }
    return res;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll t, n, k;
    cin >> t;
    for ( ll i = 1; i <= t; i++ ) cin >> a[i] >> b[i];

    for ( ll i = 1; i <= t; i++) {
        cout << somu(a[i], b[i]) << '\n';
    }

	return 0;
}



