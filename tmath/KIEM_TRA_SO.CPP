#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MAXN = 1e6 + 5;

ll tong_dau( ll x ) {
    ll res;
    x = x / 100;

    while ( x > 0 ) {
        res += x % 10;
        x /= 10;
    }

    return res;
}

ll tong_cuoi( ll x ) {
    ll res;

    while ( x > 100 ) {
        res += x % 10;
        x /= 10;
    }

    return res;
}

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n; cin >> n;

    if ( tong_dau(n) == tong_cuoi(n) ) cout << "YES";
    else cout << "NO";

    return 0;

}
