#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

ll a[MAXN];


int main () {
    ios_base::sync_with_stdio (false); cin.tie(NULL); cout.tie(NULL);

    ll n, m, h, dem = 0;

    cin >> n >> m;

    for ( ll i = 1; i <= n; i++ ) {
        cin >> a[i];
        h = max ( h, a[i] );
    }

    while ( dem < m ) {
        for ( ll i = 1; i <= n; i++ ) {
            if ( a[i] == h ) {
                a[i] -= 1;
                dem++;
            }
        }
        h -= 1;
    }

    cout << h;

    return 0;

}
