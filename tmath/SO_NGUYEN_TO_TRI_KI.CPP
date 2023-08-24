// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

ll prime[MAXN];
vector <ll> a;

void sieve () {
    memset( prime, true, sizeof(prime));
    prime[0] = prime[1] = false;

    for ( ll i = 2; i * i <= MAXN; i++ ) {
        if ( prime[i] ) {
            for ( ll j = i * i; j <= MAXN; j += i ) prime[j] = false;
        }
    }
}

void triki () {
    a.push_back(5);
    for ( ll i = 2; i <= MAXN; i++ ) {
        if ( prime[i] && prime[ i + 6 ]) {
            a.push_back ( i );
            a.push_back ( i + 6 );
        }
    }
}




int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    sieve();

    triki();

    ll t, x;

    cin >> t;

    while ( t-- ) {
        cin >> x;

        cout << a[x * 2 - 1] << " " << a[x * 2] << '\n';

    }

	return 0;
}



