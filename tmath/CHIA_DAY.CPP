#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e6 + 5;

ll a[MAXN], pre[MAXN];

void prefixSum () {
    pre[1] = a[1];

    for ( ll i = 2; i <= MAXN; i++ ) {
        pre[i] = pre[ i - 1 ] + a[i];
    }
}


int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, k = 0;

    cin >> n;
    for ( ll i = 1; i <= n; i++ ) {
        cin >> a[i];
        k += a[i];
    }

    k /= 3;

    prefixSum();

    ll i = lower_bound ( pre + 1, pre + n + 1, k) - pre;
    ll j = lower_bound ( pre + i + 1, pre + n + 1, k + a[i] ) - pre;

    if ( pre[i] == pre[j] - pre[i]) cout << i << " " << j;
    else cout << -1;

    return 0;

}
