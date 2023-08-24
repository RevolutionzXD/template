// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 25;

ll a[MAXN], b[MAXN], res = 0, n;

void Calculate () {
    ll tich = 1;
    for ( ll k = 1; k <= n; k++ ) tich = 1ll * tich * b[k];
        res = res + ( ( tich + 1 ) % 2 );
}

void Try ( ll i ) {
    for ( ll j = a[i] - 1; j <= a[i] + 1; j++ ) {
        b[i] = j;
        if ( i == n ) Calculate();
        else Try ( i + 1 );
    }
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for ( ll i = 1; i <= n; i++ ) cin >> a[i];

    Try(1);
    cout << res;

	return 0;
}
