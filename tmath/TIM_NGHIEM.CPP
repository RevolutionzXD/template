// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

ll prime[MAXN];

void sieve () {
    memset ( prime, true, sizeof (prime) );

    prime[0] = prime[1] = false;

    for ( ll i = 2; i * i <= MAXN; i++ ) {
        if ( prime[i] )
            for ( ll j = i * i; j <= MAXN; j += i ) prime[j] = false;
    }

}



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n, dem = 0; cin >> n;

	sieve ();

	for ( ll i = 2; i < n - 2; i++ ) {
        if ( prime[i] && prime[ n - i - 2 ] && i <= n - i - 2 ) {
            cout << 2 << " " << i << " " << n - i - 2 << '\n';
            dem++;
        }
	}

    if ( dem == 0 ) cout << -1;

	return 0;
}



