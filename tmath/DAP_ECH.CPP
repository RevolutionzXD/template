// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e3;

ll a[MAXN][MAXN], b[1000005];





int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll m, n, k, res = 0, value = 0;

    cin >> m >> n >> k;

    for ( ll i = 1; i <= m; i++ ) {
        for ( ll j = 1; j <= n; j++ ) {
            cin >> a[i][j];
            b[ a[i][j] ]++;
        }
    }

    for ( ll i = 1; i <= k; i++ ) {
        for ( ll i = 1; i <= 100; i++ ) {
            value = max ( value, b[i] );
        }
        res += value;

    }


	return 0;
}



