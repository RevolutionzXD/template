#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MAXN = 1e6 + 5;

ll a[MAXN];

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, t; cin >> t;

    for ( ll i = 1; i <= t; i++ ) cin >> a[i];

    for ( ll i = 1; i <= t; i++ ) {
        ll res = 0;

        for ( ll j = 2; j <=  2 * a[i]; j += 2 ) {
        res += pow(j, 2);
        }

        cout << res << " ";


    }

    return 0;

}
