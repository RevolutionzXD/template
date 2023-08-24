#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll a, b, x, res = 0; cin >> a >> b >> x;

    for ( ll i = a; i <= b; i++ ) {
        if ( i % x == 0 ) res++;
    }

    cout << res;

}
