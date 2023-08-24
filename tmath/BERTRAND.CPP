// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e6 + 5;

ll a[MAXN], prime[MAXN];


void sieve() {
    memset (prime, true, sizeof(prime));
    prime[0] = prime[1] = false;

    for ( ll i = 2; i * i <= MAXN; i++ ) {
        if (prime[i])
            for (ll j = i * i; j <= MAXN; j += i ) prime[j] = false;
    }
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t, res = 0;

    sieve();

    cin >> t;
    for ( ll i = 1; i <= t; i++ ) cin >> a[i];

    for ( ll i = 1; i <= t; i++ ) {
        for ( ll j = a[i] + 1; j < 2 * a[i] - 2; j++ ) {
            if ( prime[j] ) res++;
        }
        cout << res << '\n';
        res = 0;
    }

 	return 0;
}


