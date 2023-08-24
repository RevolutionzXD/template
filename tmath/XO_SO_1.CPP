#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MAXN = 1e6 + 5;

ll a[MAXN], b[MAXN], c[MAXN];

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, q;

    cin >> n;
    for ( ll i = 1; i <= n; i++ ) cin >> a[i];

    cin >> q;
    for ( ll i = 1; i <= q; i++) cin >> b[i];

    for ( ll i = 1; i <= q; i++) {
        for ( ll j = 1; j <= n; j++) {
            if ( a[j] == b[i] ) c[i]++;
        }
    }

    for ( ll i = 1; i <= q; i++) cout << c[i] << '\n';

    return 0;

}


