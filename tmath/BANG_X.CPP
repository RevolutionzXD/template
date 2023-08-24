// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

ll a[MAXN], b[MAXN];



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, t;

    cin >> n;
    for ( ll i = 1; i <= n; i++ ) cin >> a[i];

    cin >> t;
    for ( ll i = 1; i <= t; i++ ) cin >> b[i];

    sort ( a + 1, a + n + 1 );

    for ( ll i = 1; i <= t; i++ ) {
        ll k = lower_bound ( a + 1, a + n + 1, b[i] ) - a;
        if ( a[k] == b[i] ) cout << "Y" << '\n';
        else cout << "N" << '\n';
    }



	return 0;
}



